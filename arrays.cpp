#include<iostream>
#include<cmath>

using namespace std;


void change(int ar[]){
    // arrays are always passed by reference ...... 
    // means if we make change here then it will reflect on the original array...
    ar[2] = 5;
}

int sumofarrayelement(int ar[]){
    int sum = 0;

    // int n = sizeof(ar)/4 ;   // The warning you're encountering is due to the fact that
    //  when you pass an array to a function, it decays to a pointer. Thus, 
    //  using sizeof on the function parameter will return the size of the pointer, not the size of the array.

    for(int i =0; i< 4;i++){
        sum = sum+ar[i];
    }
    return sum;
}


int maxOfArrayelement(int ar[]){
    int max =ar[0];
    // int max = INT_MIN ; // int_max and int_min is used by using limits.h header
    for(int i=1; i<4 ;i++){
        if(max < ar[i]){
            max = ar[i];
        }
        // else max = ar[i];
    }
    return max;
}


void squareof1toN(int ar[] , int n){
    for(int i=0; i < n; i++){
        ar[i] = (i+1) * (i+1);
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<ar[i]<<" ";
    }
    
}





int main(){
    // int arr[] = {3 , 3,43, 4};
    // for(int i=0; i<=3;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // int arr2[4];
    // for(int i=0; i<4;i++){
    //     cin>>arr2[i];
    // }

    // for(int i=0; i<=3;i++){
    //     cout<<arr2[i]<<" ";
    // }
    // cout<<endl;
    // change(arr);

    // for(int i=0; i<=3;i++){
    //     cout<<arr[i]<<" ";
    // }

    int arr3[] = {10, 5 ,17,9};
    // cout<<sizeof(arr3)<<endl; // it gives size of array in bytes.....

    // cout<<sumofarrayelement(arr3);

    // cout<<maxOfArrayelement(arr3);
//-----------------------------------------------------------------
    // int n;
    // cout<<"enter the n:";
    // cin>>n;

    // int arr4[n];
    // squareof1toN(arr4 , n);
//----------------------------------------------------------------changes in odd indexed and even indexed of array
    for(int i=0; i<4; i++){
        cout<<arr3[i]<<" ";
    }
    cout<<endl;

    for(int i =0; i<4; i++){
        if(i%2 == 0){
            arr3[i] = arr3[i] + 10;
        }
        else{
            arr3[i] = arr3[i] * 2;
        }
    }
    for(int i=0; i<4; i++){
        cout<<arr3[i]<<" ";
    }
}