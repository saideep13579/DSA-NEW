#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
     vector<int> v(5);
     for(int i=0; i<5; i++){
        int ele;
        cin>>ele;
        v[i] = ele;
     }

    for(int i=0; i<5; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    for(int i=1; i<5; i++){
        v[i] = v[i]+v[i-1];
    }

    for(int i=0; i<5; i++){
        cout<<v[i]<<" ";
    }


}