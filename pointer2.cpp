#include<iostream>
using namespace std;

int main(){
    // Pointer Arithmetic

    int x,y;
    x=5;
    y=4;

    int *ptr1 =&x;
    int *ptr2 =&y;

    cout<<ptr1<<" "<<*ptr1<<endl;
    cout<<ptr2<<" "<<*ptr2<<endl;

    ptr2++; // here we incrementing the ptr2 by 1 so it will point to x

    cout<<ptr1<<" "<<*ptr1<<endl;
    cout<<ptr2<<" "<<*ptr2<<endl;

    ptr1--; // here we decreamenting the ptr1 by 1 so it will point to y

    cout<<ptr1<<" "<<*ptr1<<endl;
    cout<<ptr2<<" "<<*ptr2<<endl;
    //------------------------------------------------------

    int z=8;
    int *ptr3=&z;
    cout<<ptr3<<" "<<ptr3 +1<<" "<<ptr3 +2<<" "<<ptr3 -1<<endl;

    //--------------------------------------------------------

    int arr[2] = {5,6};
    int *ptr4 = &arr[0];

    cout<<*ptr4<<" "<<*(ptr4 +1)<<endl;

    cout<<*ptr4++<<endl; // it will retrun the value of *ptr4 and then increament the ptr4 pointer

    cout<<(*ptr4)++<<endl; // this will return the value of *ptr4 and then  increament the *ptr4 value 
                           // here in previous line increamented the ptr4 value by 1 so now it is pointing to arr[1]
                           // means here it will increament the value of arr[1].
    cout<<arr[0]<<" "<<arr[1]<<endl;

    //------------------------------------ Arrays as pointers

    int arr1[3] = {3 , 4, 5};
    int *ptr5 = &arr1[0]; 

    cout<<ptr5<<" "<<arr1<<" "<<*ptr5<<" "<<*arr1<<endl; // In this arr1 will work as pointer
    cout<<ptr5 +1<<" "<<arr1 +1 <<" "<<*(ptr5+1)<<" "<<*(arr1 +1)<<endl;
    for(int i=0; i<3; i++){
        cout<<*(arr1 + i)<<endl; // this will also done by using ptr5
    }


    int arr2[3] = {6,7,8};
    int (*ptr6)[3] = &arr2; // here we are intialing pointer who is array of size 3. this means ptr6 will points to whole arr2.

    cout<<ptr6<<" "<<arr2<<" "<<*ptr6<<" "<<*arr2<<endl; // that is why the *ptr6 will give the address of the arr2.
}