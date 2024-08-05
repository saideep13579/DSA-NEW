#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


// here we can use prefix sum 
// like prefix sum of l - prefix sum of r


int sumofRange(vector<int> &v){
    int sum =0;
    int l,r;
    cout<<"enter range l,r:";
    cin>>l>>r;

    for(int i=l; i<= r; i++){
        sum = sum + v[i];
    }

    return sum;
}

int main(){
    int n;
    cout<<"enter n:";
    cin>>n;

    vector<int> v(n);
    
    for(int i=0; i<n; i++){
        int ele;
        cin>>ele;
        v[i] = ele;
    }

    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    int q;
    cout<<"enter number of queries:";
    cin>>q;
    for(int i=0; i<q; i++){
        cout<<sumofRange(v)<<endl;
    }
    
}