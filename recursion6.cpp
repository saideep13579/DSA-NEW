#include<iostream>
using namespace std;


void f(int num , int k){
    // here i try to find the k multiple of num
    if(k<1) return;
    f(num, k-1);
    cout<<num * k<<" ";
}

int alternate_sign_sum(int n){
    // here i want to sum n nartural numbers but with alternate sign
    if(n<1) return 0;
    return alternate_sign_sum(n-1) + ((n%2 == 0) ? (-n) : n); 
}

int main(){
    // f(12,5);

    cout<<alternate_sign_sum(5);
}