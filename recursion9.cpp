#include<iostream>
#include<math.h>
using namespace std;

// here i have solved the frog jump problem using recursion
// here h is for height of the stones

int f(int *h, int n, int idx){
    if(idx == n-1) return 0;
    if(idx == n-2) return f(h,n,idx+1) + abs(h[idx] - h[n+1]);

    return min(f(h,n,idx+1) + abs(h[idx]- h[idx+1]) , f(h,n,idx+2) + abs(h[idx] - h[idx+2]));

}

// this function will check the target element x is present in array or not by using recursion.

bool check(int *arr, int n, int idx, int x){
    if(idx == n) return false;
    return arr[idx] == x || check(arr,n,idx+1,x);
}

int main(){
    int h[4] = {10,30,40,20};

    // cout<<f(h,4,0);

    int arr[5] = {1,2,3,4,5};
    int n=5;
    int x=4;

    int result = check(arr,5,0,6);
    if(result == 1) cout<<"yes";
    else cout<<"no";
}