#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

// here is code for the decoding the encoded string

string decoded_string(string s){

    string result = "";

    for(int i =0; i< s.length(); i++){ // travels till the ] come and adding it to the result
        if(s[i] != ']'){
            result.push_back(s[i]);
        }
        else{
            string str = "";
            while(!result.empty() && result.back() != '[') // adding the elements in str from result till [
            {
                str.push_back(result.back());
                result.pop_back();
            }

            reverse(str.begin(), str.end()); // reverse the str
            result.pop_back();

            string num = "";
            while(!result.empty() && result.back() >= '0' && result.back() <= '9'){ // finding the num form result
                num.push_back(result.back());
                result.pop_back();
            }

            reverse(num.begin(), num.end()); // reverse that num

            int int_num = stoi(num); // string  to int convert that num

            for(int i=int_num ; i> 0; i--){ // adding the str int_num of times in result
                result += str;
            }
        }
    }

    return result;
}

int main(){
    string s ;
    cout<<"enter the encoded string:";
    cin>>s;

    cout<<decoded_string(s);
}