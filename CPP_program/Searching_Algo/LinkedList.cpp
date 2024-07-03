#include<iostream>
using namespace std;

    class Node{
        public:
        int val;
        Node* next;
        Node(int value){
            val = value;
            next = NULL;
        }
    };
    // Add new node at the start
    void insertAtHead(Node* head,int val){
        Node* new_node = new Node(val);
        new_node->next = head;
        head = new_node;
    }
    void display(Node* head){
        Node * temp = head;
        while(temp==NULL){
            cout<<temp->val<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }

int main(){
    Node * n = new Node(5);
     Node* head = NULL;
    cout<<n->val<<head;
    insertAtHead(head,9);
    display(head);
    insertAtHead(head,7);
    display(head);
    return 0;
}