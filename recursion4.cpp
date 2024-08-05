#include<iostream>
#include<string>
using namespace std;

// this function is for removing occurance of the char in string by using recursion
string remove_occurance(string s, int idx, int n){
    string x = "";
    if(idx == n) return "";

    // this is one of the approach 
    // if(s[idx] == 'a') x = "";
    // else x = s[idx];
    // return x + remove_occurance(s, idx+1, 5);

    // another coding approach is as follows

    string curr="";
    curr += s[idx];
    return ((s[idx] == 'a') ? "" : curr) + remove_occurance(s, idx+1, 5);
}

int main(){
    string s = "abcax";

    cout<<remove_occurance(s,0,5);
}