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

    int left_pointer =0;
    int right_pointer = v.size()-1;

    while(left_pointer<right_pointer){
        if(v[left_pointer]%2 == 0) left_pointer++;
        if(v[right_pointer]%2 == 1) right_pointer--;

        if(left_pointer<right_pointer && v[left_pointer]%2 == 1 && v[right_pointer]%2 ==0){
            int swap = v[left_pointer];
            v[left_pointer] = v[right_pointer];
            v[right_pointer] = swap;
            left_pointer++;
            right_pointer--;
        }
    }

    for(int i=0; i<5; i++){
        cout<<v[i]<<" ";
    }
}