#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> pascaltriangle(int n){
    vector<vector<int>> pascal(n);

    for(int i=0; i<n; i++){
        pascal[i].resize(i+1);
        for(int j=0; j<=i; j++){
            if(j==0 || i==j){
                pascal[i][j]=1;
            }
            else{
                pascal[i][j] = pascal[i-1][j-1]+pascal[i-1][j];
            }
        }
    }

    return pascal;
}


int main(){
    int n;
    cout<<"enter the n:";
    cin>>n;

    vector<vector<int>> ans;
    ans = pascaltriangle(n);

    for(int i=0; i<ans.size(); i++){
        for(int j =0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}