#include<iostream>
#include<vector>
using namespace std;

// here we are checking the target is present in 2d array or not
// for that i need to calculate the position of mid .

int search_target(vector<vector<int>> &vec, int row, int col, int target){
    int low =0;
    int high = (row * col) -1;

    while(low <= high){
        int mid = low + (high-low)/2;
        int x = mid / col; // finding the mid's row th position 
        int y = mid % col; // finding the mid's col th position
        if(vec[x][y] == target){
            return 1;
        }
        else if(vec[x][y] < target){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }

    return -1;

}

int main(){
    vector<vector<int>> vec {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int row = vec.size();
    int col = vec[0].size();

    int target;
    cout<<"enter the target:";
    cin>>target;

    cout<<search_target(vec, row, col, target);
}