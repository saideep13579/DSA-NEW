#include<iostream>
#include<climits>
using namespace std;

class Stack{
    int capacity;
    int top;
    int *arr;

    public:
    Stack(int c){
        this->capacity = c;
        arr = new int[c];
        this->top = -1;
    }

    void push(int i){
        if(this->top == this->capacity-1){
            cout<<"Overflow"<<endl;
            return;
        }
        this->top++;
        this->arr[this->top]=i;
    }

    int pop(){
        if(this->top == -1){
            cout<<"Underflow"<<endl;
            return INT_MIN;
        }
        this->top--;
    }

    int size(){
        return this->top+1;
    }

    int Top(){
        if(this->top == -1){
            cout<<"underflow"<<endl;
            return INT_MIN;
        }
        return this->arr[top];
    }

    bool isempty(){
        return this->top == -1;
    }

    bool isfull(){
        return this->top == this->capacity-1;
    }
};

int main(){

    Stack st(5);
    st.push(2);
    st.push(3);
    st.push(4);
    st.pop();
    st.push(6);
    st.push(7);
    st.push(8);
    st.push(9);

    cout<<st.size()<<endl;
    cout<<st.isfull()<<endl;
    cout<<st.isempty()<<endl;

}