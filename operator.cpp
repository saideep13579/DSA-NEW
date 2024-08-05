#include <iostream>
using namespace std;

// 7/22*(3.14+2)*3/5      8.28 6.28 3.14 0

int main()
{
    float a = 7/22*(3.14+2)*3/5;
    cout<<a<<endl;

    float b = 7.0/22*(3.14+2)*3/5.0;
    cout<<b<<endl;

    int c = 5.14;
    float e = 7.0/22;
    float f = 3.0/5;
    float d = e * c * f;
    cout<<d<<endl;
}