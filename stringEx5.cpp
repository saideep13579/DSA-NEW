#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

// here i want to find out the largest common prefix string from given string
// here i used  one trick that is sorting .
// if we do that then by comparing the 1st and last elemet we can find the largest common prefix string
// because the only 1st and last will show distinct behaviour (mean's the differe btw them is large)

string LargestCommonPrefixString(vector<string> &str){

    string ans;

    sort(str.begin(), str.end());

    string s1 = str[0];
    string s2 = str[str.size()-1];

    for(int i =0; i<s1.size(); i++){
        if(s1[i] == s2[i]){
            ans += s1[i];
        }
        else{
            break;
        }
    }

    return ans;
}

int main(){
    int n ;
    cout<<"enter the number of string:";
    cin>>n;

    vector<string> str(n);
    for(int i =0; i<n; i++){
        cin>>str[i];
    }

    cout<<LargestCommonPrefixString(str);
}

