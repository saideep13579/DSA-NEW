#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(6);

    cout<<"enter the vector:";
    for(int i=0; i< v.size(); i++){
        cin>>v[i];
    }

    int targetsum;
    cout<<"enter the target sum:";
    cin>>targetsum;

    int triplet=0;
    for(int i =0; i<v.size(); i++){
        for(int j=i+1; j<v.size(); j++){
            for(int k=j+1; k<v.size(); k++){
                if(v[i]+v[j]+v[k] == targetsum){
                    triplet++;
                }
            }
        }
    }
    cout<<triplet;
}