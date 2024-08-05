#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdlib>
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

    int left_pointer =0;
    int right_pointer = v.size()-1;

    while(left_pointer<right_pointer){
    if(abs(v[left_pointer]) < abs(v[right_pointer])) {
        v[right_pointer]= v[right_pointer] * v[right_pointer];
        right_pointer--;
    }
    if(left_pointer<right_pointer && abs(v[left_pointer]) > abs(v[right_pointer])){
        swap(v[left_pointer],v[right_pointer]);
        v[right_pointer] = v[right_pointer] * v[right_pointer];
        right_pointer--;
    }

    }
    v[0] = v[0] * v[0];

    for(int i=0; i<5; i++){
        cout<<v[i]<<" ";
    }
}