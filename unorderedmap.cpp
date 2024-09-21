#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;

int main(){

    // here i am using unordered map
    
    unordered_map<int, string> unmap;
    unmap.insert(make_pair(5,"sai"));
    unmap[3]="sa";
    unmap[7]="s";

    for(auto ele : unmap){
        cout<<ele.first<<"-"<<ele.second<<endl;
    }

    cout<<endl;

    // here i am using multimap

    multimap<string,int> mmp;
    mmp.insert(make_pair("sai",19838));
    mmp.insert(make_pair("rm",22383));
    mmp.insert(make_pair("sai",398848));
    // mmp["s"] = 3983;  // throw's an error.

    for(auto ele: mmp){
        cout<<ele.first<<"-"<<ele.second<<endl;
    }
    cout<<mmp.count("sai")<<endl;

    cout<<endl;
    
    // here i am using unordered multimap

    unordered_multimap<string,int> unmmp;
    unmmp.insert(make_pair("apple",3));
    unmmp.insert(make_pair("mango",9));
    unmmp.insert(make_pair("apple",7));
    // mmp["s"] = 3983;  // throw's an error.

    for(auto pair: unmmp){
        cout<<pair.first<<"-"<<pair.second<<endl;
    }
    cout<<unmmp.count("apple")<<endl;
}