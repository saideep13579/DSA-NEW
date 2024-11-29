#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next = nullptr;
    Node* back = nullptr;

    Node(int data1){
        data = data1;
    }

    Node(int data1, Node* next1, Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }

};

Node* convertvecDLL(vector<int> vec){ // conveting the vector to DLL
    Node* head = new Node(vec[0]);
    Node* prev = head;

    for(int i=1; i<vec.size(); i++){
        Node* temp = new Node(vec[i]);
        temp->back = prev;
        prev->next = temp;
        prev = prev->next;
    }

    return head;
}

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){ // For printing the DLL
        cout<<temp->data<<" ";
        temp= temp->next;
    }
}

Node* deleteKthPosition(Node* head, int k){
    // -----------------this is one of the approach---------
    // Node* temp = head;
    // Node* prev = NULL;
    // int cnt =0;

    // if(head == NULL){
    //     return head;
    // }
    // else if(head->next == nullptr){
    //     if(k==1){
    //     free(head);
    //     return NULL;
    //     }
    // }
    
    // while(temp != NULL){
    //     cnt++;
    //     if(cnt == k && k==1){
    //         head = head->next;
    //         head->back = nullptr;
    //         temp->next = nullptr;
    //         // free(temp);
    //         break;
    //     }
    //     else if(cnt == k && temp->next == nullptr){
    //         prev->next = nullptr;
    //         temp->back = nullptr;
    //         // free(temp);
    //         break;
    //     }
    //     else if(cnt == k){
    //         prev->next = temp->next;
    //         temp->next->back = temp->back;

    //         temp->next = nullptr;
    //         temp->back = nullptr;
    //         // free(temp);
    //         break;
    //     }
    //     prev = temp;
    //     temp = temp->next;
    // }

    // free(temp);

    // ------------------------------------- another approach--------
    // -------we juuuuuuuustttttttt need the kth node then we can delete easily

    Node* temp = head;
    int cnt =0;

    if(head == NULL || head->next == NULL) return NULL;

    while(temp != NULL){
        cnt++;
        if(cnt == k){
            break;
        }
        temp = temp->next;
    }
    
    if(temp->back == nullptr && temp->next != nullptr){
        head = head->next;
        head->back = nullptr;
        temp->next = nullptr;
    }
    else if(temp->next == nullptr && temp->back != nullptr){
        Node* prev = temp->back;
        prev->next = nullptr;
        temp->back = nullptr;
    }
    else if(temp->next != nullptr && temp->back != nullptr){
        Node* prev = temp->back;
        prev->next = temp->next;
        temp->next->back = prev;
        temp->next = nullptr;
        temp->back = nullptr;
    }
    free(temp);
    return head;
}

int main(){
    vector<int> vec{4,5,2,1,3};
    Node* head = convertvecDLL(vec);

    print(head);
    cout<<endl;

    head = deleteKthPosition(head,5);

    print(head);
}