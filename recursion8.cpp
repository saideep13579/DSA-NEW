#include<iostream>
using namespace std;

int power(int num,int d){
    // in i have used simple iteration code to calculate power but we can recursion.
    int ans=1;
    for(int i=1; i<=d ; i++){
        ans = ans* num;
    }
    return ans;
}

// i have made function for checking number is armstrong or not 
int armstrong(int num, int d){
    if(num==0) return 0;
    int sum = power(num%10,d) + armstrong(num/10,d);
    return sum;
}
int main(){
    // int num =153;
    // int d= 3;

    int result =armstrong(153,3);
    if(num == result) cout<<"yes";
    else cout<<"no";
    // cout<<power(2,3);
}