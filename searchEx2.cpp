#include<iostream>
using namespace std;

// here we need to find the square root of x & round it to it's nearest floor value.

int floor(int x){
    int low = 1;
    int high = x;
    int ans=-1;

    while(low <= high){
        int mid = low + ((high-low)/2);
        if(mid * mid <= x){
            ans = mid;
            low = mid+1;
        }
        else high = mid-1;
        
    }
    return ans;
}

int main(){
    int x;
    cout<<"enter x:";
    cin>>x;

    cout<<floor(x);
}