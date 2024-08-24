#include<iostream>
#include<vector>
using namespace std;

// here we are finding the 1sr and last position of an target 
// for that purpuse we first find the first position and then last position
// which will make time O(logn) only.

int lowerbound(vector<int> &vec, int target){
    int first=-1;
    int low =0;
    int high =vec.size()-1;

    while(low<=high){
        int mid = high + low /2;
        if(vec[mid]>=target){
            high = mid-1;
            if(vec[mid] == target){
                first=mid;
            }
        }
        else{
            low = mid+1;
        }
    }
    return first;
    
}

int upperbound(vector<int> &vec, int target){
    int last =-1;
    int low =0;
    int high =vec.size()-1;

    while(low<=high){
        int mid = high +low /2;
        if(vec[mid] <= target){
            low=mid+1;
            if(vec[mid]== target){
                last = mid;
            }
        }
        else{
            high=mid-1;
        }
    }

    return last;
}

int main(){
    vector<int> vec {-2,-1,1,2,3,4,4,4,5};
    vector<int> result;

    int target ;
    cout<<"enter the target:";
    cin>>target;

    int low=0;
    int high=vec.size()-1;

    int lb = lowerbound(vec, target);
    int up = upperbound(vec,target);

    result.push_back(lb);
    result.push_back(up);

    cout<<result[0]<<" "<<result[1];
}