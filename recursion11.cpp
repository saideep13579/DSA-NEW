#include<iostream>
using namespace std;

// In this we are counting paths to go from top left to bottom right of grid.
// here contrain's are from one position we can go right by one or down by one position

void countOfPath(int arr[2][3], int row, int col, int m, int n, int &count){
    if(row == m-1 && col == n-1){
        count ++;
        return;
    }

    if(row >= m || col >=n) return; // this is for if we exceeded the value of row or col of grid then it don't do anything and return

    countOfPath(arr, row , col+1, m, n, count); // this is for going right
    countOfPath(arr, row+1, col, m, n, count); // this is for going down
}
int main(){
    int arr[3][3];
    int count =0;
    countOfPath(arr, 0, 0, 3, 3, count);

    cout<<count;
}