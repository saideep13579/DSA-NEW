#include<iostream>
#include<vector>
using namespace std;

// here we need to move all 0's to end of vector while maintaining relative order of non-zero elements
// so we need to check the element from end if there is 0 then we need to swap it next element 
// only if the next element is non-zero element.

void sorting(vector<int> &vec){
    for(int i=vec.size()-1; i>=0; i--){
        if(vec[i] == 0){
            int j =i;
            while(j<vec.size()-1 && vec[j+1] != 0){
                swap(vec[j], vec[j+1]);
                j++;
            }
        }
    }
}

int main(){
    vector<int> vec(5);
    for(int i=0; i<5; i++){
        cin>>vec[i];
    }

    sorting(vec);

    for(int i=0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }
}