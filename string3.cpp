#include<iostream>
#include<string>
#include<vector>
using namespace std;

// here we are using the count sort for checking if string is anagram or not.
// for the previous example also we can use count sort for sorting the string.

bool isAnagram(string &s1, string &s2){
    vector<int> freq(26,0);

    if(s1.length() != s2.length()) return false;

    for(int i=0; i<s1.length(); i++){
        freq[s1[i] - 'a']++; // here if we find any letter in s1 then we are just adding the count of that letter
        freq[s2[i] - 'a']--; // here if we find any letter in s2 then we are just decreasing count of that letter
    }

    for(int i=0; i<26; i++){
        // if there is any value present other than 0 in freq vec then it is not anagram.
        if(freq[i] != 0) return false;
    }

    return true;
}

int main(){
    string s1 = "saideep";
    string s2 = "deepsai";

    if(isAnagram(s1, s2)){
        cout<<"string is anagram";
    }
    else{
        cout<<"string is not anagram";
    }
    return 0;
}