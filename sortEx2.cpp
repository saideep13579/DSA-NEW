#include<iostream>
#include<vector>
using namespace std;

// here we are trying to find the k th smallest element in the array.
// for that i have used the quick sort 
// because we just need th kth position then we can directly print that element
// so we are using the pivot to compare the k and pivot to do that.

int partition(int arr[], int l , int r){
    int i = l-1;
    int pivot = arr[r];
    for(int j =l; j<r; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1], arr[r]);
    return i+1;

}


void k_smallest(int arr[], int l, int r, int k){
    if(l>r) return;
    int pi = partition(arr, l, r);
    if(pi == k){
        cout<<"the k th smallest element is "<<arr[pi]<<endl;
        return;
    }
    else if(pi > k){
        k_smallest(arr, l, pi-1,k);
    }
    else{
        k_smallest(arr,pi+1,r,k);
    }
    

}

int main(){
    // vector<int> vec(5);
    int arr[] = {3,5,2,1,4,7,8,6};
    int n = sizeof(arr)/sizeof(arr[0]) -1;

    int k;
    cout<<"enter the K:";
    cin>>k;

    k_smallest(arr,0,n,k-1);

    

}