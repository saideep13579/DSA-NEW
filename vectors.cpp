#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> v(5);

    // cout<<"size:"<<v.size()<<endl;
    // cout<<"capacity:"<<v.capacity()<<endl;

    // v.push_back(2);

    // cout<<"size:"<<v.size()<<endl;
    // cout<<"capacity:"<<v.capacity()<<endl;

    // v.resize(10);
    // cout<<"size:"<<v.size()<<endl;
    // cout<<"capacity:"<<v.capacity()<<endl;

    // v.insert(v.begin()+1, 5);
    // cout<<"size:"<<v.size()<<endl;
    // cout<<"capacity:"<<v.capacity()<<endl;

    // v.erase(v.begin()+1);
    // cout<<"size:"<<v.size()<<endl;
    // cout<<"capacity:"<<v.capacity()<<endl;

    //----------------------- last occurance of the element x
 
    for(int i=0; i<5; i++){
        cin>>v[i];
    }

    // int x;
    // cout<<"enter the element:";
    // cin>>x;

    // int lastposition=-1;
    // for(int i= v.size() ; i> 0 ; i--){
    //     if(v[i] == x){
    //         lastposition =i;
    //         break;
    //     }
    // }
    // cout<<lastposition;

    //---------------------- array is sorted or not 

    bool sortedflag = true;
    for(int i= 0; i < v.size()-1; i++){
        if(v[i]>=v[i+1]){
            sortedflag = false;
            break;
        }
        // else cout<<"sorted";
    }
    cout<<sortedflag;

    

}