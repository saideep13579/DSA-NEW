#include <iostream>
using namespace std;

float changetem(float n)
{
    float kelvin;
    float fahrenheit;
    kelvin = n + 237.15;
    fahrenheit = (n * 1.80) + 32.00;
    float arr[2] = {kelvin,fahrenheit};
    for(int i=0 ; i<2 ; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}

int main()
{
    float n;
    cout<<"Enter the temperture in celcius:";
    cin>>n;
    cout<<"the temperature are [kelvin,fahrenheit]"<<endl;
    changetem(n);
}