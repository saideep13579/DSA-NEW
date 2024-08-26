#include<iostream>
using namespace std;

// here i make the funtion which tell's if element is present or not
// but here is the duplicate values are present
// we don't have the issue for the middle duplicate values but for the 
// terminal(both end ) values will cause the issue so we need to eliminate them.

int search(int arr[], int low, int high, int target){
    if(arr[low] == arr[high]){
        if(arr[low] == target) return 1;
        else{
            low++;
            high--;
        }
    }

    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid] == target) return 1;
        else if(arr[mid] < target){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }

    return -1;
}

int main(){
    int arr[]= {0,0,1,1,1,2,3,3,0,0};
    int low = 0;
    int high = sizeof(arr)/sizeof(arr[0]) - 1;

    int target;
    cout<<"enter the target:";
    cin>>target;

    cout<<search(arr, low, high , target);

    return 0;
}