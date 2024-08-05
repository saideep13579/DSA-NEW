#include<iostream>
#include<vector>
using namespace std;

int main(){
    // 2 3 1 2 3 4 1
    vector<int> v(7);
    for(int i =0; i<7; i++){
        cin>>v[i];
    }

    // bool unique = false;
    
    for(int i =0; i<7; i++){
        for(int j=i+1; j<7; j++){
            if(v[i] == v[j]){
                v[i] = -1;
                v[j] = -1;
            }
        }
    }

    // for(int i =0; i<7; i++){
    //     cout<<v[i]<<" ";
    // }

    for(int i =0; i<7; i++){
        if(v[i] > 0){
            cout<<v[i];
            break;
        }
    }

}