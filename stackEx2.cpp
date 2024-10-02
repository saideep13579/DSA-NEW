#include<iostream>
#include<vector>
#include<stack>
using namespace std;

// Nearest greater to left

vector<int> nearestGreaterleft(vector<int> &vec){
    vector<int> result;
    stack<int> st;

    for(int i=0; i<vec.size(); i++){
        if(st.empty()){
            result.push_back(-1);
        }
        else if(!st.empty() && st.top() > vec[i]){
            result.push_back(st.top());
        }
        else if(!st.empty() && st.top() <= vec[i]){
            while(!st.empty() && st.top() <= vec[i]){
                st.pop();
            }
            if(st.empty()){
                result.push_back(-1);
            }
            else{
                result.push_back(st.top());
            }
        }

        st.push(vec[i]);
    }

    return result;
}

int main(){
    vector<int> vec{1,3,2,4};
    
    vector<int> ans = nearestGreaterleft(vec);

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}