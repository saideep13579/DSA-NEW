#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v(5);
    int n= 5;
    int count=0;

    for(int i=0; i<5; i++){
        int ele; 
        cin>>ele;
        v[i] = ele;
    }

    // for(int i=0; i<5; i++){
    //     if(v[i] == 0){
    //         count++;
    //     }
    // }

    // for(int i=0; i<n; i++){
    //     if(i<count) v[i] = 0;
    //     else v[i] =1;
    // }

    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    int i=0;
    int j=v.size()-1;

    while(i<j){
        if(v[i]==0) i++;
        else{
            if(v[j]==1) j--;
            else{
                int swap = v[i];
                v[i] = v[j];
                v[j] = swap;
                i++;
                j--;
            }
        }
    }

    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
}