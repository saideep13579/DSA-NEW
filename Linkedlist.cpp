#include<iostream>
#include<vector>
using namespace std;

class Node{ // this Node datatype for creating the Node we can use struct also for this
            // but then it won't give the properties of oops.
    public:
    int data;
    Node* next;

    Node(int data1){
        data = data1;
        next = nullptr;
    }

    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
};

Node* Convertaar2LL(vector<int> vec){ // this is for the converting the vec to LL which return's the head of LL
    Node* head = new Node(vec[0]);
    Node* mover = head;
    for(int i=1; i<vec.size(); i++){
        Node* temp = new Node(vec[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int LengthofLL(Node* head){ // this is for calculating the length of LL
    int count=0;
    Node* temp= head;
    while(temp){
        temp = temp->next;
        count++;
    }
    return count;
}

int SearchInLL(Node* head, int ele){ // this is for the searching the element in LL
    Node* temp = head; 
    while(temp){
    if(temp->data == ele) return 1;
    else{
        temp= temp->next;
    }
    }
    return 0;
}

int main(){

    vector<int> vec{2,3,4,5};
    Node* head = Convertaar2LL(vec);
    cout<<"head of LL:"<<head->data;   // this will print the head of the LL

    cout<<endl;

    Node* temp = head;
    while(temp){ // this will traverse through the entire LL till temp next is null
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    cout<<endl;

    int len = LengthofLL(head);
    cout<<"length of LL:"<<len<<endl;


    cout<<"element is present :"<<SearchInLL(head,5);

    return 0;
}