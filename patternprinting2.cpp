#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the n*n matrix number:";
    cin>>n;

    // ------------------ 0 and 1 triangle
    
    // for(int i=1; i <= n; i++){
    //     for(int j=1; j <= i; j++){
    //         if((i+j)% 2 == 0){
    //             cout<<"1 ";
    //         }
    //         else cout<<"0 ";
    //     }
    //     cout<<endl;
    // }

    //------------------- star plus

    // for(int i=1; i<= n; i++){
    //     for(int j=1; j<= n; j++){
    //         if((i == (n+1)/2) || (j== (n+1)/2)){
    //             cout<<"*"<<" ";
    //         }
    //         else cout<<"  ";
    //     }
    //     cout<<endl;
    // }

    //-------------------- star half triangle reversed

    for(int i= 1; i<= n; i++){  // rows
        for(int j= 1; j<= n-i; j++){ //spaces
            cout<<"  ";
        }
        for(int j= 1; j<= i; j++){  //stars
            cout<<"* ";
        }
        cout<<endl;
    }

    //----------------------------
}