#include<iostream>
#include<vector>
#include<string>
using namespace std;

// In this we are trying to find subsequence of the string 

void subsequence(string s, int idx, string result, vector<string> &li){
    if(idx == s.size()){
        li.push_back(result); // we add that subsquence to vector li
        return;
    }
    subsequence(s, idx+1, result + s[idx], li); // here if element get picked then we add it to result
    subsequence(s, idx+1, result , li); // here don't get picked then do nothing
}

int main(){
    string s = "abc";
    string result="";
    vector<string> li;
    // int n =s.size();
    subsequence(s, 0, result , li);

    for(int i=0; i<li.size(); i++){
        cout<<li[i]<<" ";
    }
}