#include<iostream>
#include<vector>
using namespace std;

// here i need to find the minimum element index in sorted rotated array.


int minIndex(vector<int> &vec, int low, int high){

    if(vec[low] < vec[high]) return low; // here i 1st checked if the array is sorted or sorted rotated
                                        // if it is sorted then our 0 th index is the minimun index.
    else{
        while(low < high){
            int mid = low +((high - low) /2);
            if(vec[mid] >= vec[low]){ // here we need check the if the mid value is greater than low then our min index is on 
                                        // right side of mid.
                low = mid+1;
            }
            else{
                high = mid;
            }
        }
    }
    return low;
}

int main(){
    vector<int> vec {3,4,0,1,2};
    int low =0;
    int high = vec.size()-1;

    cout<<minIndex(vec, low ,high);
}