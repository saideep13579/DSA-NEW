#include<iostream>
#include<stack>
using namespace std;

// here i make the function for inserting an element in stack at bottom and also for the 
// inserting an element at any index (0 base indexing from bottom of the stack).

stack<int> insertatbottom(stack<int> &st, int inse){
    stack<int> temp;
    while(!st.empty()){
        temp.push(st.top());
        st.pop();
    }
    st.push(inse);
    while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
    }

    return st;
}

stack<int> insertatanyindex(stack<int> &st, int insert, int idx){
    stack<int> temp;

    while(!st.empty()){
        if(st.size()-1 >= idx){
            temp.push(st.top());
            st.pop();
        }else{
            st.push(insert);
            break;
        }
    }
    while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
    }

    return st;
}

int main(){
    stack<int> st;
    st.push(4);
    st.push(5);
    st.push(6);

    int insert =7;
    stack<int> res = insertatbottom(st,7);

    while(!res.empty()){
        cout<<res.top()<<endl;;
        res.pop();
    }

    cout<<endl;

    int insert2 = 9;
    int index =2;
    stack<int> result = insertatanyindex(st,insert2,index);

    while(!result.empty()){
        cout<<result.top()<<endl;
        result.pop();
    }

    return 0;
}