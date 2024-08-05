#include <iostream>
using namespace std;

int main(){

    // number is composite or not -------------------------------------

    // int n;
    // cout<<"enter the number:";
    // cin>>n;

    // bool flag = true;   // true means prime

    // here we neglected the 1 and the number itself from the loop 1st on
    // for(int i= 2; i< n; i++){
    //     if(n%i == 0){
    //         cout<<n<<" is composite number";
    //         break;
    //     }
    // }

    // for(int i =2; i<= n/2; i++){
    //     if(n%i == 0){
    //         flag = false; // false means composite
    //         break;
    //     }
    // }

    // if(n == 1) cout<<"1 is neigher prime nor composite";
    // else if(flag== false) cout<<"composite";
    // else cout<<"prime";


    // continue is for skiping 1 round in loop ----------------------------------
    // for(int i =1; i <= 100; i++){
    //     if(i%2 == 0){
    //         continue;
    //     }
    //     else{
    //         cout<<i<<" ";
    //     }
    // }
    //-------------------------------------------------------

    // number of digits in given interger
    // int n;
    // cout<<"enter the number:";
    // cin>>n;
    // int c =0;

    // for(int i =n; i != 0;){
    //     i = i/10;
    //     c++;
    // }
    // cout<<c;
    //------------------------------------------------------

    // sum of the digits of the number

    // int n;
    // cout<<"enter the number:";
    // cin>>n;
    // int sum = 0;
    // sum = n% 10;

    // while(n != 0){
    //     n = n/ 10;
    //     int reminder = n % 10;
    //     sum = sum + reminder;
    // }

    // cout<<sum;

    //---------------------------------------------------

    // product of the digits of the number

    // int n;
    // cout<<"enter the number:";
    // cin>> n;
    // int product = n % 10;

    // while(n != 0){
    //     n = n/10;
    //     if(n != 0){
    //         int reminder = n% 10;
    //         product = product * reminder;
    //     }
        
    // }
    // cout<< product;
    // ----------------------------------------------------------

    // sum of even digits of the number

    // int n;
    // cout<<"enter the number:";
    // cin>>n;
    // int digit = n%10;
    // int sum = 0;
    // if(digit % 2 == 0){
    //     sum = sum +digit;
    // }
    // while(n>10){
    //     n = n/10;
    //     digit = n%10;
    //     if(digit % 2 == 0){
    //         sum = sum +digit;
    //     }
    // }
    
    // cout<<sum;

    // -------------------------------------------

    // reverse of number
    // int n;
    // cout<<"enter the number:";
    // cin>>n;
    // int sum = 0;

    // while(n>0){
        
    //     int reminder = n % 10;
    //     sum = sum + reminder;
    //     if(n>0 && n<10) break;
    //     sum = sum * 10;
    //     n = n / 10;

    // }

    // cout<<sum;
    // -----------------------------------

    //factorial of the number

    int n;
    cout<<"enter the number:";
    cin>>n;

    int fact = 1;
    
    // while(n>0){
    //     fact = fact * n;
    //     n--;
    // }
    // if(n = 0){
    //     fact = 1;
    // }
    // cout<<fact;

    // factorial of the n numbers
    for(int i = 1; i <= n; i++){
        fact = fact * i;
        cout<< fact<<" ";
    }
    //----------------------------------------------------------
}