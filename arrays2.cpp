#include<iostream>
#include<limits.h>
// #include<cmath>
#include<vector>
using namespace std;

int main(){
    //---------------------count the number of element which is greater than x

    // int x;
    // cout<<"enter the value:";
    // cin>>x;

    // int arr[] = {10 , 3,5, 8, 32, 11};
    // int count =0;
    // for(int i=0 ; i < sizeof(arr)/4; i++){
    //     if(arr[i] > x) count++;
    // }
    // cout<<"total count is "<<count;

    //------------------------second maximum of the array

    // int arr[] = {10 , 3,5, 8, 32, 112};

    // int mx = INT_MIN;
    // int secdmax = INT_MIN;
    // for(int i =0; i< 6; i++){
    //     mx = max(mx,arr[i]);
    // }
    // cout<<mx<<endl;
    // for(int i =0; i<6; i++){
    //     if(arr[i] != mx){
    //         secdmax = max(secdmax , arr[i]);
    //     }
    // }
    // cout<<secdmax;

    // ---------------------- program for writting one array to another in reverse order

    // int arr[] = {15, 20, 30,40};
    // int n = sizeof(arr)/4;

    // int arr1[n];
    // for(int i=0; i<n; i++){ // for printing the original array
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    // for(int i= 0; i<n; i++){ // for inserting an reverse array in other array
    //     arr1[i] = arr[n-1-i];
    //     cout<<arr1[i]<<" "; // for printing 
    // }

    // ---------------------- program to reverse array without using extra array

    // int arr[] = {15,20,30,40,50,60};
    // int n = sizeof(arr)/sizeof(arr[0]);
    
    // --------- METHOD I-----------
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    // for(int i=0; i<n/2 ; i++){
    //     int temp=arr[i];
    //     arr[i]=arr[n-i-1];
    //     arr[n-i-1]=temp;


    // }
    
    // -----method II-------------

    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }

    // int j= n-1;
    // int i = 0;
    // while(i<j){
    //     int temp = arr[i];
    //     arr[i]= arr[j];
    //     arr[j] = temp;
    //     i++;
    //     j--;
    // }
    
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }

    // -----------------------------------array is palindrom or not

    int arr[] = {15,20,30,30,1,15};
    int n = sizeof(arr)/ sizeof(arr[0]);

    for(int i=0; i< n; i++){
        if(arr[i] != arr[n-i-1]){
            cout<<"not palindrom";
            break;
        }
    }


}