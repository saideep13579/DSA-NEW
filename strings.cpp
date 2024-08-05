#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    // string s;
    // // cin>>s;
    // getline(cin,s);
    // cout<<s;

    // string str;
    // cout<<"enter the string:";
    // getline(cin, str);

    // int count=0;
    // int n = str.length();

    // for(int i=0; i<n; i++){
    //     if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
    //     count++;
    // }
    // cout<<count;

    //--------- push_back() , pop_back() , append() ,size(), clear(), + operator , reverse(),

    string str1 = "saideeps";
    int a = str1.length()/2;

    int i = 0;
    int j = a - 1;
    while(i<j){
        int swap = str1[i];
        str1[i] = str1[j];
        str1[j] = swap;
        i++;
        j--;
    }

    reverse(str1.begin(), str1.begin()+a);
    cout<<str1;

    //----------- to_string(): int to string , stoi(): string to int , substring()
}