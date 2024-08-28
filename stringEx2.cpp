#include<iostream>
#include<string>

using namespace std;

// here i used the merge sort for sorting the string 

void merge(string &str, int fi, int mid , int la){
    int an = mid - fi +1;
    int bn = la - mid ;
    string a,b;

    for(int i=0; i<an; i++){
        a.push_back(str[fi+i]);
    }
    for(int j=0; j<bn; j++){
        b.push_back(str[mid+1+j]);
    }

    int i=0, j=0, k=fi;

    while(i<an && j<bn){
        if(int(a[i]) < int(b[j])){ // checked the ascii values of char
            str[k++] = a[i++];
        }
        else{
            str[k++] = b[j++];
        }
    }

    while(i<an){
        str[k++] = a[i++];
    }
    while(j<bn){
        str[k++] = b[j++];
    }
}

void sortstr(string &str, int fi, int la){
    if(fi < la) {
        int mid = fi + (la-fi) /2;
        sortstr(str, fi, mid);
        sortstr(str,mid+1, la);
        merge(str, fi, mid, la);
    }

}

int main(){
    // string str = "Fuck this world";

    // string sub1 = str.substr(0, 5);
    // cout<<sub1<<endl;

    string str = "codingworld";

    sortstr(str,0,str.length()-1);

    cout<<str;
}