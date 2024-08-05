#include<iostream>
using namespace std;

void arrout(int ar[3][2]){
    // in 2d we need to specify the dimention of the array in function reference
    for(int i=0; i<3 ;i++){
        for(int j = 0; j<2; j++){
            cout<<ar[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    // int arr[][2] = {1,99,2,98,8};
    // for(int i=0; i<3;i++){
    //     for(int j=0; j<2; j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    //---------------------------------------------------------------------
    int arr1[2][2] = {1, 100 , 2 , 99};
    int arr2[2][2] = { 1, 100, 2, 99};

    // int add[2][2] = arr1 + arr2;  // i think this is not a python...........
    // int add[2][2];
    // for(int i=0; i<2; i++){
    //     for(int j=0; j<2; j++){
    //         add[i][j] = arr1[i][j] + arr2[i][j];
    //     }
    // }

    // for(int i=0; i<2 ;i++){
    //     for(int j = 0; j<2; j++){
    //         cout<<add[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    //--------------------------------------------transpose of the array

    int arr3[2][3] = { {1, 10 , 20},{2, 20, 30} };

    int arr3t[3][2];
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            arr3t[i][j] = arr3[j][i];
        }
    }

    arrout(arr3t);



}