#include<iostream>
using namespace std;

// here we code recursive binary search

int binarysearch(int arr[], int low , int high, int target){
    if(low > high) return -1;

    int mid = (high + low) /2; // here we don't take high - low because if we
                            // if we take that then we need to add condition for cheking the low and high 
                            // is it equal to target or not ... like the previous code (iterative approach of binary search).

    if(arr[mid] == target){
        return mid;
    }
    else if(arr[mid] < target){
        return binarysearch(arr, mid+1, high, target);
    }
    else{
        return binarysearch(arr, low, mid-1, target);
    }
}

int main(){
    int arr[] = {1,9,13,15,18,22,35,40};

    int target;
    cout<<"enter the target:";
    cin>>target;

    int low = 0;
    int high = sizeof(arr)/sizeof(arr[0]) -1;

    cout<<binarysearch(arr, low , high , target);
}