#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rotatearray(vector<vector<int>> &v){
    // for transpose 
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<i; j++){
                swap(v[i][j],v[j][i]);
        }
    }

    // for reverse of the row
    for(int i=0; i<v.size(); i++){
        reverse(v[i].begin(), v[i].end());
    }
}

int main(){
    int n;
    cout<<"enter n:";
    cin>>n;

    vector<vector<int>> vec(n, vector<int> (n));

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>vec[i][j];
        }
    }

    rotatearray(vec);

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }

}