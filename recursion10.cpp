#include<iostream>
#include<vector>
using namespace std;

void sumOfSubset(int *arr, int n,int idx, int sum, vector<int> &result){
    if(idx == n){
        result.push_back(sum);
        return ;
    }
    sumOfSubset(arr, n, idx+1, sum+arr[idx], result); // function call for get picked 
    sumOfSubset(arr, n, idx+1, sum , result); // funtion call for not picked..

    // In this i want to calculate the sum of all subset of the array and print them any order.
    // so what i want to do is for every element it is choice to get picked or not and by using idx i am traversing arr
    // and if the element get picked then we add it to sum.. and if not then don't add it.
    // and here base case is as idx traverses through whole arr then that time sum is add to vector result.
}
int main(){
    int arr[] = {2,4,5};
    vector<int> result;
    int sum =0;
    sumOfSubset(arr, 3, 0, sum, result);

    for(int i=0;i<result.size(); i++){
        cout<<result[i]<<" ";
    }
}