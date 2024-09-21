#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
using namespace std;

//  here making an hashtable for searching key in O(1) time 
//  heeeere using the seperate chaining approch by linked list.

class Hashing{
    vector<list<int>> hashtable;
    int bucket;

    public:

    Hashing(int size){
        bucket = size;
        hashtable.resize(bucket);
    }

    int hashfunction(int key){
        return key % 10;
    }

    void addkey(int key){
        int idx = hashfunction(key);
        hashtable[idx].push_back(key);
    }

    list<int>:: iterator searchkey(int key){
        int idx = hashfunction(key);
        return find(hashtable[idx].begin() , hashtable[idx].end() , key);
    }

    void deletekey(int key){
        int idx = hashfunction(key);

        if(searchkey(key) != hashtable[idx].end()){
            hashtable[idx].erase(searchkey(key));
            cout<<key<<" key is deleted"<<endl;
        }

        else{
            cout<<key<<" key is not present in hashtable"<<endl;
        }
    }
};

int main(){
    Hashing h(10);
    h.addkey(5);
    h.addkey(2);
    h.addkey(7);
    h.addkey(15);

    h.deletekey(15);
    h.deletekey(15);

    
}