#include<iostream>
#include<unordered_map>
using namespace std;

// here i want find longest subarray length whose sum is equal to 0
// for that purpose i have used a prefix sum concept and that sum are stored in hash map
// logic is the prefix sum(l-1) = prefix sum(r) if this is true then the in between subarray's sum is 0
// hash map is used for keeping track of the prefix sum .

int subarraySumZero(int arr[],int n){
    unordered_map<int,int> mp;

    int prefix_sum =0;
    int max_len =0;
    for(int i=0; i<n; i++){
        prefix_sum += arr[i];
        if(mp.find(prefix_sum) != mp.end()){
            max_len = max(max_len, i-mp[prefix_sum]);
        }
        else{
            mp[prefix_sum] = i;
        }
    }

    return max_len;
}

int main(){
    int arr[] = {15,-2,2,-8,1,7,10,23};
    int n = sizeof(arr);

    cout<<subarraySumZero(arr,n);
}