#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// some thing is wrong 

void spiralorder(vector<vector<int>> vec){
    int top =0;
    int bottom = vec.size()-1;
    int left =0;
    int right = vec[0].size()-1;

    int direction =0;

    while(top <= bottom && left <= right){
        // left to right
        if(direction == 0){
            for(int i=left; i<=right; i++){
                cout<<vec[top][i]<<" ";
            }
            top++;
            // direction++;
        }
        // top to bottom
        else if(direction ==1){
            for(int i=top; i<=bottom; i++){
                cout<<vec[i][right]<<" ";
            }
            right--;
            // direction++;
        } 
        // right to left
        else if(direction ==2){
            for(int i=right; i>=left; i--){
                cout<<vec[bottom][i]<<" ";
            }
            bottom--;
            // direction++;
        }
        // bottom to top
        else{
            for(int i=bottom; i>=top; i--){
                cout<<vec[i][left]<<" ";
            }
            left++;
            // direction =0;
        }
        direction = (direction+1)%4;
    }
}

int main(){

    int n,m;
    cout<<"enter n,m:";
    cin>>n>>m;
    vector<vector<int>> vec(n, vector<int> (m));

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>vec[i][j];
        }
    }

    spiralorder(vec);
}