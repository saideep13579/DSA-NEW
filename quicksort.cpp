#include<iostream>
using namespace std;

// here we are making quick sort function by using recurssion
// for that we are finding 1st pivot element then make sure that in 
// left side of pivot all are less than pivot and on right all are greater .

int partition(int arr[], int first , int last){
    int pivot = arr[last];
    int i = first-1;
    for(int j=first; j<last; j++){
        if(arr[j] < arr[last]){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1], arr[last]);

    return i+1;

}

void quick_sort(int arr[], int first, int last){
    if(first >= last)   return;

    int pi = partition(arr, first , last);
    quick_sort(arr, first, pi-1);
    quick_sort(arr, pi+1, last);

}
int main(){
    int arr[] = {18,12,30,16,35,20};
    int n = sizeof(arr)/sizeof(arr[0]);

    quick_sort(arr, 0, n-1);

    for(int i=0; i<n ; i++){
        cout<<arr[i]<<" ";
    }

}