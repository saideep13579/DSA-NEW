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

    bool check = false;
    int tsum =0;
    int psum =0;
    for(int i=0;i<v.size(); i++){
        tsum = tsum +v[i];
    }
    for(int i=0;i<v.size()-1; i++){
        psum = psum + v[i];
        if(psum == tsum/2){
            cout<<"substring index"<<i;
            check = true;
            break;
        }
    }
    cout<<"substring sum equal:"<<check;
}