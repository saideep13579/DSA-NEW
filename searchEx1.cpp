#include<iostream>
#include<vector>
using namespace std;

// here i have make the code for finding the 1st occurance of the x element
// this is iterative approach but we can use recursive also .
// here i just need to check the mid is equal to target or not 
// if it is equal to target then we need to check the left of that if it is also equal to 
// target then reapet it till not equal ...

int firstoccurance(vector<int> &vec, int low , int high, int target){
    while(low <= high){
        int mid = low + ((high-low)/2);
        if(vec[mid] == target){
            for(int i =1; i <= mid; i++){
                if(vec[mid -i] != target) return mid-i+1;
            }
        }
        if(vec[mid] < target){
            low = mid+1;
        }
        else{
            high = mid -1;
        }
    }

    return -1;    
}

int main(){
    vector<int> vec {2,5,5,5,6,6,8,9,9};
    
    int low= 0;
    int high = vec.size()-1;

    int target;
    cout<<"enter the target:";
    cin>>target;

    cout<<firstoccurance(vec, low, high , target);
}