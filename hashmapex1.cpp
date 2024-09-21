#include<iostream>
#include<map>
#include<vector>
using namespace std;

// here we need to calculate the sum of repetitive elements [1,1,2,3,3] sum is 1+3.

int main(){
    int n;
    cout<<"enter n:";
    cin>>n;

    vector<int> vec(n);
    cout<<"enter the elements:"<<endl;
    for(int i=0; i<n; i++){
        cin>>vec[i];
    }

    map<int,int> m;
    for(int i=0; i<n; i++){
        m[vec[i]]++; //  for pair [1,1] if the we encounter one more 1 then it will become [1,2].
    }

    int sum=0;
    map<int,int> :: iterator it;
    for(it = m.begin(); it != m.end(); it++){
        if(it->second != 1){
            sum += it->first;
        }
    }

    cout<<"the sum of repetitive element is "<<sum;
}