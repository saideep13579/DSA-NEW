#include<iostream>
using namespace std;

void print(int a, int n){
    //-------------------print n to 1
    // if(n==0) return ;    // base
    // cout<<n<<endl;       //work
    // print(n-1);          // call

    //------------------print 1 to n
    
    int b = n;
    if(a == b+1) return ;
    cout<<a<<endl;
    print(a+1 , b);

}

void print(int n){
    //-----------------print 1 to n without extra parameter

    if(n == 0) return ;         // base
    print(n-1);                 //call
    cout<<n<<endl;                 // work
}

void add(int n,int s){
    //-------------------------print sum of 1 to n parameterised
    if(n < 0){
        cout<<s<<endl;
        return;
    }
    add(n-1,s+n);
    
}


int sum(int n){
    // if we do sum using return type
    if(n == 1) return 1;
    return n + sum(n-1);

}

int fact(int n){
    if(n == 0 || n== 1) return 1;
    return n * fact(n-1);
}

int power(int a, int b){
    if(b == 0) return 1;
    return a * power(a,b-1);
}


int fibo(int n){
    if(n == 1 || n == 2 ) return 1;
    return fibo(n-1) + fibo(n-2);
    
}

int main(){
    int n;
    cout<<"enter n:";
    cin>>n;

    // print(1,n);
    // print(n);

    // add(n, 0);
    // cout<<sum(n);

    // cout<<fact(n);

    // int a , b;
    // cout<<"enter a:";
    // cin>>a;
    // cout<<"enter b:";
    // cin>>b;
    // cout<<power(a,b);

    cout<<fibo(n);
}