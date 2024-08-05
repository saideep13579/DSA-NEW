#include <iostream>
#include<math.h>
using namespace std;

int fibo(int n)
{
    if (n == 0 || n == 1)
        return n;
    return fibo(n - 1) + fibo(n - 2);
}

int sum_digit(int n)
{
    if (n == 0)
        return n;
    // int digit = n % 10;
    // n = n / 10 ;
    return (n % 10) + sum_digit(n / 10);
}

int power(int p, int q){
    if(q==0) return 1;
    if(q%2 == 0){
        int result = power(p,q/2);
        return result * result;
    }
    else{
        int result = power(p,q/2);
        return p * result * result;
    }
}

int main()
{

    // int result = fibo(3);
    // cout<<result;

    // int result = sum_digit(1234);
    // cout<<result;
    // return 0;


     int result = power(5,3);
     cout<<result;
     return 0;
}