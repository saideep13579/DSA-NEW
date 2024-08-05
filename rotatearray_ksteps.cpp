#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v(5);
    cout<<"enter the vector:";
    for(int i=0; i<5; i++){
        cin>>v[i];
    }

    vector<int> ansv(v.size());
    //---------------------------

    // for(int i=0; i<5; i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    // for(int i= 4; i>=0 ; i--){
    //     int swap = v[i];
    //     v[i] = v[i-1];
    //     v[i-1] = swap;
    // }

    // for(int i=0; i<5; i++){
    //     cout<<v[i]<<" ";
    // }

    //----------------- in upper something is wrong in ans also this is not an optimised solution
    
    int n = v.size();
    int k;
    cout<<"enter the k steps:";
    cin>>k;

    k = k%v.size();
    int j =0;

    // for(int i =n-k; i<n; i++){
    //     // ansv.push_back(v[i]);
    //     ansv[j]=v[i];
    //     j++;
    // }
    // for(int i=0; i<n-k; i++){
    //     // ansv.push_back(v[i]);
    //     ansv[j]=v[i];
    //     j++;
    // }

    // for(int i=0; i<5; i++){
    //     cout<<ansv[i]<<" ";
    }

    //------------------ in upper one we are using extra memory

    reverse(v.begin(), v.end());
    reverse(v.begin(), v.begin()+k);
    reverse(v.begin()+k,v.end());

    for(int i=0; i<5; i++){
        cout<<v[i]<<" ";
    }

}