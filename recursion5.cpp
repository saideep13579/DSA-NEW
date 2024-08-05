#include<iostream>
using namespace std;

// here we make an function which work recursive to find out number is palindrom or not

bool palindromcheck(int num, int *temp){
    if(num >=0 and num<= 9){
        int lastoftemp = (*temp)%10;
        (*temp) /= 10;
        return num == lastoftemp;
    }

    bool result = (palindromcheck(num/10 ,temp) and (num%10) == ((*temp)%10));
    (*temp) /= 10;
    return result;
}
int main(){
    int num = 121;
    int anothernum = num;
    int *temp = &anothernum;

    cout<<palindromcheck(num, temp);
}