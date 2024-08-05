#include <iostream>
using namespace std;

int main(){
    // even numbers from 1 to 100---------------------------------
    // for(int i = 1; i<= 100; i++){
    //     if(i%2==0){
    //         cout<<i<<" ";
    //     }
    // } // 100 times

    // for(int i = 2; i<= 100; i=i+2){
    //     cout<<i<<" ";
    // } // 50 times run ---------------------------------------------

    // table of 19----------------------------------------------
    // for(int i= 1; i<=10; i++){
    //     cout<<19*i<<endl;
    // }
    //----------------------------------------------

    // print n term of series 
    // int n;
    // cout<<"enter value of n:";
    // cin>>n;
    // // 1,3,5,7,9.........
    // for(int i= 1; i<=(2*n-1); i = i+2){
    //     cout<<i<<" ";
    // }
    // // 4,7,10,13,16.....
    // for(int i=4; i<=3*n-1; i= i+3){
    //     cout<<i<<" ";
    // } // it will runs for only nth times cause of i = i+3

    // 4,7,10,13.....
    // int a = 4;
    // for(int i =1; i<=n; i++){
    //     cout<<a<<" ";
    //     a += 3;
    // }
    //----------------------------------------------------

    // 1,2,4,8,16,32.......
    // int a =1;
    // for(int i =1; i<=n; i++){
    //     cout<<a<<" ";
    //     a = a*2;
    // }

    //--------------------------------------------

    // highest factor of that number
    int n,f;
    cout<<"enter the number:";
    cin>>n;

    // for(int i=1; i <n ; i++){
    //     if(n%i == 0){
    //         f = i;
    //     }
    // }
    // cout<<"factor is "<<f;
    //------------------break-------------------------------
    // above code uses lot of resouces so if we go from n/2 to 1 then
    // it will be efficient and also using break will be more usefull
    for(int i=n/2; i >=1 ; i--){
        if(n%i == 0){
            f = i;
            break;
        }
    }
    cout<<f;
}