#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int row,col;
    cout<<"enter row,col:";
    cin>>row>>col;

    vector<vector<int>> v(row, vector<int> (col));

    for(int i=0; i<row; i++){
        // v[i].resize(row);
        for(int j=0; j<col; j++){
            int ele;
            cin>>ele;
            v[i][j] = ele;
        }
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(v[i][j] != 0){
                cout<< col-j<<endl;
                break;
            }
        }
    }
}