#include <iostream>
using namespace std;

int main(){

    int row , col;
    cout<<"enter row , col :";
    cin>>row;
    cin>>col;

    // star normal pattern

    // for(int i = 1; i<= row; i++){
    //     for(int j = 1; j<= col; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    //----------------------------------------

    // 1 2 3 normal pattern

    // for(int i= 1; i<= row; i++){
    //     for(int j= 1; j<= col; j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

    //--------------------------------------------

    // A B C normal pattern

    // for(int i= 1; i<= row; i++){
    //     for(int j= 0; j< col; j++){
    //         cout<<char(65+j);
    //     }
    //     cout<<endl;  
    // }

    //----------------------------------------

    // 111 222 333 pattern

    // for(int i =1; i<= row; i++){
    //     for(int j = 1; j<= col; j++){
    //         cout<<i;
    //     }
    //     cout<<endl;
    // }

    //---------------------------------------------star triangle

    // for(int i=1; i<= row; i++){
    //     for(int j=1; j<= i; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    //------------------------------------numerical triangle

    // for(int i = 1; i<= row; i++){
    //     for(int j =1; j<= i; j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

    //---------------------------------alphabet numeric triangle

    // for(int i = 1; i<= row; i++){
    //     if(i%2 == 0){
    //         for(int j=1; j<= i; j++){
    //             cout<<char(j+ 64);
    //         }
    //     }
    //     else{
    //         for(int k = 1; k<= i; k++){
    //             cout<<k;
    //         }
    //     }
    //     cout<<endl;
    // }

    //-----------------------------star triangle ulta
    // mine
    // for(int i= row; i> 0; i--){
    //     for(int j= 1; j<= i; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    //-----
    // for(int i= 1; i<= row; i++){
    //     for(int j= 1; j<= col+1-i; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    //-----------------------------
    
    //3   3 2   3 2 1 
    // for(int i= 1; i <= row; i++){
    //     for(int j=col; j >= col+1-i; j--){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

    //-------------------------------odd number triangle

    // for(int i= 1; i<= row; i++){
        
    //     for(int j=1; j< 2*i; j+= 2){
    //         cout<<j;

    //     }
    //     cout<<endl;
    // }

    //---------------------------------floyd's triangle
    int a= 1;
    for(int i=1; i<=row; i++){
        for(int j= 1; j <= i; j++){
            cout<<a;
            a++;
        }
        cout<<endl;
    }
}