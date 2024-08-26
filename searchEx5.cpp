#include<iostream>
#include<vector>
using namespace std;

// here i need to find the target index in the sorted rotated array.
// for that perpose 1st find the min index
// then search the target element in right side of min element
// and also left side of min element.

int minIndex(vector<int> &vec, int low ,int high){ // here i calculated the min index in array
    if(vec[low] < vec[high]) return low;
    else{
        while(low < high){
            int mid = low + (high -low) /2;
            if(vec[mid] >= vec[low]){
                low = mid+1;
            }else{
                high =mid;
            }
        }
    }
    return low;
}

int Search(vector<int> &vec, int low , int high, int target){ // here i index of the target element.
    while(low <= high){
        int mid =low + (high -low) /2;
        if(vec[mid] == target){
            return mid;
        }
        else if(vec[mid] < target){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return -1;
}


int main(){
    vector<int> vec {6,7,8,1,2,3,4,5};

    int target;
    cout<<"enter the target:";
    cin>>target;

    int low =0;
    int high = vec.size()-1;

    int min_index = minIndex(vec, low, high);

    if(min_index == 0){ // if the array is rotated but its is normal sorted then we search from low to high
        int index = Search(vec, low , high, target);
        cout<<index;
    }
    else{
        int left_search = Search(vec, low, min_index-1, target); // search left arr 
        int right_search= Search(vec, min_index, high, target); // search right arr

        if(left_search == -1 && right_search == -1){
            cout<<-1;
        }
        else{
            if(left_search==-1) cout<<right_search;
            else cout<<left_search;
        }
    }
    
}