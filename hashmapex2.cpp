#include<iostream>
#include<map>
#include<vector>
using namespace std;

// here i am checking all given string in vector are equal or not 
// means if we do some shifting of character in string's then can they become equal or not.
// if after shifting it will make them equal then print yes . and if nnot then no

// but here we really need to shift them ..... 
// no if we calculate the frequency count of each and every char and that count is divisible
// by number of string's in vector then we can say that there is chance we make them equal.

int main(){
    map<char,int> mp;

    int n;
    cout<<"enter N:";
    cin>>n;

    vector<string> vec(n);
    for(int i =0 ; i<n; i++){
        cin>>vec[i];
    }

    for(int i=0; i<n; i++){
        string s1 = vec[i];
        for(int j=0; j< s1.length(); j++){
            mp[s1[j]]++;
        }
    }

    bool divisible = true;
    for (auto ele : mp) {
        if (ele.second % n != 0) {
            divisible = false;
            break;
        }
    }

    if (divisible) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}