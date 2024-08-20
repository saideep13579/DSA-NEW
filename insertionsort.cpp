#include<iostream>
#include<vector>
using namespace std;

// here we are trying to do insertion sort 
// here we need to vitualize the two subarr sorted and unsorted
// here let's take 1st elemt as sorted then we need to go for the 2nd and 
// then insert it in sorted arr 

void insertion_sort(vector<int> &vec){
    for(int i=1; i<vec.size(); i++){
        int current = vec[i];
        int j=i-1;
        while(j>=0 && vec[j] > current){
            vec[j+1] = vec[j];
            j--;
        }
        vec[j+1] = current;
    }

    return;
}

int main(){
    vector<int> vec(5);
    for(int i=0; i<5; i++){
        cin>>vec[i];
    }

    insertion_sort(vec);

    for(int i=0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }

}