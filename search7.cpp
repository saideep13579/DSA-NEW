#include<iostream>
using namespace std;

// here we neeed to find the peak element in array
// so i just do compare the mid , mid+1 and mid-1 for finding peak element
// and also this code is applicable for the finding one peak element if an array have 
// many peak elements.(here i think we need to put condition for terminal elements)

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
    int arr[] = {0,1,2,1,3,5,2,1};

    int low = 0;
    int high = sizeof(arr)/sizeof(arr[0]) -1;

    cout<<peak_element(arr, low , high);
}