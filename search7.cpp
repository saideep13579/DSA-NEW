#include<iostream>
using namespace std;

int peak_element(int arr[], int low , int high){
    while(low <= high){
        int mid = low + (high-low)/2;
        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){
            return mid;
        }
        else if(arr[mid]> arr[mid+1] && arr[mid] < arr[mid-1]){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return -1;
}
int main(){
    int arr[] = {0,1,2,3,4,5,6,2,1};

    int low = 0;
    int high = sizeof(arr)/sizeof(arr[0]) -1;

    cout<<peak_element(arr, low , high);
}