#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int bruteforce(vector<vector<int>> vec, int l1,int r1,int l2,int r2){

    int sum=0;
    for(int i=l1-1; i<l2;i++){
        for(int j=r1-1; j<l2; j++){
            sum += vec[i][j];
        }
    }
    return sum;
}

int prefixsum(vector<vector<int>> &vec, int l1,int r1,int l2,int r2){

    int row =0;
    // prefix sum for each row
    while(row <vec.size()){
        for(int col=1; col<vec[0].size(); col++){
            vec[row][col] += vec[row][col-1];
        }
        row++;
    }

    int row_sum=0;
    for(int i=l1-1; i<l2; i++){
        if(r1 != 0){
            row_sum += vec[i][r2-1] - vec[i][r1-2];
        }
        else{
            row_sum += vec[i][r2-1];
        }
        
    }
    return row_sum;
}

int main(){
    int n;
    cout<<"enter n:";
    cin>>n;

    int l1,r1,l2,r2;
    cout<<"enter l1,r1,l2,r2:";
    cin>>l1>>r1>>l2>>r2;

    vector<vector<int>> vec(n, vector<int> (n));

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>vec[i][j];
        }
    }

    // cout<<bruteforce(vec,l1,r1,l2,r2)<<endl;

    cout<<prefixsum(vec,l1,r1,l2,r2)<<endl;


}