#include<iostream>
#include<vector>
using namespace std;

// In bubble sort we repeatedly swap adjecent element for making it ordered array

void bubble_sort(vector<int> &vec){

    for(int i=0; i<vec.size()-1; i++){
        for(int j=0; j<vec.size()-1-i; j++){ // here we are traversing through just n-1-i because after 1st iteration last element 
                                            // is placed in right position.
            if(vec[j] > vec[j+1]){
                swap(vec[j],vec[j+1]);
            }
        }
    }
}

int main(){
    vector<int> vec(5);
    cout<<"enter the arr:";
    for(int i=0; i<5; i++){
        cin>>vec[i];
    }

    bubble_sort(vec);

    for(int i=0; i<5; i++){
        cout<<vec[i]<<" ";
    }

}