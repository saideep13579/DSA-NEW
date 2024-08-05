#include<iostream>
using namespace std;

// this function is for the printing the elements of the array by using recursion

void print_all_element(int arr[], int idx, int n){
    if(idx == n) return ;
    cout<<arr[idx]<<" ";
    print_all_element(arr , idx+1, n);
}

//this function is for the finding the maximum element of the array by using recursion

int max_of_arr(int *arr, int idx, int n){
    if(idx == n-1) return arr[idx];
    return max(arr[idx] , max_of_arr(arr,idx+1,n));
}

// this function is for the calculating the sum of the element of the array by using recursion

int sum_of_ele(int *arr, int idx, int n){
    if(idx == n-1) return arr[idx];
    return arr[idx] + sum_of_ele(arr, idx+1, n);
}

int main(){
    int arr[5] = {1,2,3,4,5};

    // print_all_element(arr,0,5);

    // cout<<max_of_arr(arr,0,5);

    cout<<sum_of_ele(arr, 0,5);
}