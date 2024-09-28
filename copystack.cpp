#include<iostream>
#include<stack>
using namespace std;

// here the basic question is to make a copy of the stack 
// for that i am using the temp stack 
// and adding element form st to temp then the stack will become reverse
// so i do again adding element from temp to st so it will again reverse..

stack<int> copystack(stack<int> &st){
    stack<int> temp;
    while(!st.empty()){
        temp.push(st.top());
        st.pop();
    }

    // here i am again adding the element to st from the temp stack

    while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
    }

    return st;
}

int main(){
    stack<int> st;
    st.push(5);
    st.push(4);
    st.push(2);

    stack<int> res = copystack(st);

    // printing the output stack of copystack function.
    
    while(!res.empty()){
        cout<<res.top()<<endl;
        res.pop();
    }

    return 0;
}