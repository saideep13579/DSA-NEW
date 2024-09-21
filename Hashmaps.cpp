#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string, int> directory;
    directory["sai"] =  3982;
    directory["sandy"] = 39824;

    for(auto ele: directory){
        cout<<ele.first<<"-"<<ele.second<<endl;
    }

    cout<<endl;
    
    map<string, int>:: iterator it;

    for(it = directory.begin(); it != directory.end(); it++){
        cout<< it->first <<"-"<< it->second <<endl;
    }
}