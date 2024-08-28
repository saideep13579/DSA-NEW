#include<iostream>
#include<string>
#include<vector>
using namespace std;

// here i am checking if string is isomorphic or not
// here i am going to store the index in freq1 and freq2

bool isIsomorphic(string &s1, string s2){
    vector<int> freq1(128,-1);
    vector<int> freq2(128,-1);
    // bool ans = false;

    if(s1.length()!= s2.length()) return false;

    for(int i=0; i<s1.length(); i++){
        if(freq1[s1[i]] != freq2[s2[i]]){ // here we checking if values of are same or not
            return false;
        }
        freq1[s1[i]] = freq2[s2[i]] = i; // if they are equal then change it to new index.
    }

    return true;
}

int main(){
    string s1,s2;
    cout<<"enter the s1:";
    cin>>s1;
    cout<<"enter the s2:";
    cin>>s2;

    if(isIsomorphic(s1,s2)){
        cout<<"string's are isomorphic";
    }
    else{
        cout<<"string's are not isomorphic";
    }

    return 0;
}