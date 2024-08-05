#include<iostream>
using namespace std;

// this is one have more time and space complexity than anyone else..................

int power(int n){
    int value = 1;
    for(int i=0; i<n; i++){
        value = value*2;
    }
    return value;
}


int main(){
    int binum ;
    cout<<"enter the binary:";
    cin>>binum;

    string numtostr = to_string(binum) ;
    int n = numtostr.length();
    int strtonum = stoi(numtostr);

    // cout<<n<<endl;
    // cout<<strtonum<<endl;

    int final_num = 0;

    for(int i=0; i <= n; i++){
        int digit = strtonum % 10;
        int value = digit * power(i);
        final_num = final_num + value;
        strtonum = strtonum / 10;
    }

    cout<<final_num;


    // less t & s complexity .................................check this one ............................................
    // int power =1; 
    // int fin_val =0;
    // while(binum > 0){
    //     int lastdigit = binum % 10;
    //     fin_val += lastdigit*power;
    //     binum /= 10;
    //     power *= 2;
    // }
    // cout<<fin_val;
}