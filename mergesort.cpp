#include<iostream>
using namespace std;


// merge sort 1st we make subarr then we sort them and merge them.

void merge(int arr[], int l , int mid, int r){
    int an= mid-l+1;
    int bn = r-mid;
    int a[an];
    int b[bn];
    for(int i=0; i<an; i++){
        a[i] = arr[l+i];
    }
    for(int j=0; j<bn; j++){
        b[j] = arr[mid+1+j];
    }

    int i=0,j=0;
    int k=l;

    while(i < an && j< bn){
        if(a[i] < b[j]){
            arr[k++] = a[i++];
        }
        else{
            arr[k++] = b[j++];
        }
    }
    while(i<an){
        arr[k++] = a[i++];
    }
    while(j<bn){
        arr[k++] = b[j++];
    }
}


void merge_sort(int arr[], int l, int r){

    if(l >= r) return;

    int mid = (l+r)/2;
    merge_sort(arr, l, mid);
    merge_sort(arr, mid+1, r);
    merge(arr,l,mid,r);

}


int main(){
    int arr[] = {3,1,12,7,43,5,2,40,4,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    merge_sort(arr, 0, n-1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}