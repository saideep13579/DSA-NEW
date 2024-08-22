#include<iostream>
using namespace std;


// here is code of iterative approach for the binary search 

int main(){
    int arr[] ={1,9,13,15,18,22,35,40};
    int target;
    cout<<"enter the target:";
    cin>>target;

    int low =0;
    int high = sizeof(arr)/sizeof(arr[0])-1;

    while(low < high){
        int mid = (high - low) /2;
        if(arr[low] == target){
            cout<<low;
            break;
        }
        else if(arr[high] == target){
            cout<<high;
            break;
        }
        else if(arr[mid] == target){
            cout<<mid;
            break;
        }else if(arr[mid] < target){
            low = mid+1;

        }else{
            high = mid-1;
        }
    }
}