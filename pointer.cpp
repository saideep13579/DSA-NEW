#include<iostream>
using namespace std;

void swap(int* p , int* q){
    int temp = *p;
    *p = *q;
    *q = temp;
}

int main(){
    int x;
    int* ptr = &x;
    cout<<"enter value of x:";
    cin>>x;

    cout<<x<<endl;
    cout<<&x<<endl;

    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    *ptr = 7;
    cout<<*ptr<<endl;

    int a =4;
    int b =5;
    cout<<a<<" and "<<b<<endl;
    swap(&a, &b);
    cout<<a<<" and "<<b<<endl;

    
}