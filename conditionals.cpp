#include <iostream>
using namespace std;

int main()
{
    // int n;
    // cout<<"enter value of n:";
    // cin>>n;

    // if(n%5 == 0){
    //     cout<<n<<" is divisible by 5"<<endl;
    // }
    // else{
    //     cout<<n<<" is not divisible by 5"<<endl;
    // }

    // int a;
    // cout<<"enter the value of number:";
    // cin>> a;

    // if(a>99 && a<1000){
    //     cout<<"the number is 3 digit number";
    // }

    // Neated conditionals
//------------------------------------
    // int a,b,c;
    // cout<<"enter value of a:"<<endl;
    // cin>>a;
    
    // cout<<"enter value of b:"<<endl;
    // cin>>b;
    
    // cout<<"enter value of c:"<<endl;
    // cin>>c;

    // if(a>b){
    //     if(a>c){
    //         cout<<"a is greatest";
    //     }
    //     else{
    //         cout<<"c is greatest";
    //     }
    // }
    // else{   //b>a
    //     if(b>c){
    //         cout<<"b is greatest";
    //     }
    //     else{
    //         cout<<"c is greatest";
    //     }
    // }

//-------------------------------------

int x,y;
cout<<"enter (x, y) :";
cin>> x;
cin>> y;

if(x>0 && y>0){
    cout<<"lies in 1st quadrent"<<endl;
}
else if(x<0 && y>0){
    cout<<"lies in 2nd quadrent"<<endl;
}
else if(x<0 && y<0){
    cout<<"lies in 3nd quadrent"<<endl;
}
else if(x>0 && y<0){
    cout<<"lies in 4nd quadrent"<<endl;
}
else{
    cout<<"on the origin"<<endl;
}

//--------------------------------------

}