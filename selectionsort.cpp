#include<iostream>
#include<vector>
using namespace std;

void selection_sort(vector<int> &v){

    // here we just need index of min element in unsorted vect then we just place it to begining of unsorted.
    // here we are virtualy making two vect sorted and unsorted 
    // just traverse through this loop you will get it........
    
    for(int i=0; i<v.size(); i++){
        int min_idx =i;
        for(int j=i+1; j<v.size(); j++){
            if(v[j] < v[min_idx]){
                min_idx = j;
            }
        }
        swap(v[i],v[min_idx]);
    }
}

int main(){
    vector<int> vec(5);
    for(int i=0; i<vec.size(); i++){
        cin>>vec[i];
    }

    selection_sort(vec);

    for(int i=0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }
}