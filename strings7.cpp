#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

// here we are finding the maximum length of substring of 1's with flipping k 0's
// here we are using sliding window approach

int largest_sequence_of_1(string str, int k){
    int start=0;
    int end =0;
    int zero_count =0;
    int maxlength =0;

    for(; end<str.length(); end++){
        if(str[end] == '0') {
            zero_count++;
        }

        while(zero_count > k){
            if(str[start] == '0'){
                zero_count--;
            }
            start++;
        }
        maxlength = max(maxlength, end-start+1);
    }

    return maxlength;
}

int main(){
    string str ;
    cout<<"enter the string:";
    cin>>str;

    int k;
    cout<<"enter the k:";
    cin>>k;

    cout<<largest_sequence_of_1(str, k);

}



















