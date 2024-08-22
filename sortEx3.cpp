#include<iostream>
#include<vector>
using namespace std;

// here we are just merging the two sorted vec
// here we take new num3 vec for add the sorted element.

void mergeTow(vector<int> &num1, vector<int> &num2, int n, int m){
    int i=0, j=0;
    vector<int> num3;
    while(i<=n && j<=m){
        if(num1[i] <= num2[j]){
            num3.push_back(num1[i]);
            i++;
        }
        else{
            num3.push_back(num2[j]);
            j++;
        }
    }
    while(i<=n){
        num3.push_back(num1[i]);
        i++;
    }
    while(j<=m){
        num3.push_back(num2[j]);
        j++;
    }

    for(int k =0; k<num3.size(); k++){
        cout<<num3[k]<<" ";
    }
}

int main(){
    // int num1[] ={5,8,10};
    // int num2[] ={2,7,8};

    vector<int> num1(3);
    vector<int> num2(3);
    
    int n =num1.size()-1;
    int m = num2.size()-1;

    cout<<"enter num1 element:";
    for(int i=0; i<=n; i++){
        cin>>num1[i];
    }
    
    cout<<"enter num2 element:";
    for(int i=0; i<=m; i++){
        cin>>num2[i];
    }

    mergeTow(num1, num2, n, m);
}