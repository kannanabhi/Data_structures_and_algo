#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int data) {
        this->data=data;
        this->next=NULL;
    }
};
void InsertAtTail(node* &tail,int value) {
    node * temp=new node(value);
    tail->next=temp;
    tail=temp;
}
void InsertAtHead(node* &head,int value) {
    node* temp=new node(value);
    temp->next = head;
    head=temp;
}


void print(node* &head) {
    node* temp= head;
    while(temp!=NULL) {
        cout<<temp->data<<" ";
        temp=temp->next;
    }  
    cout<<endl; 
}

int main() {

    node *node1=new node(10);
    node * head=node1;
    node* tail = node1;


    print(head);
    InsertAtHead(head,20);
    InsertAtHead(head,30);
    print(head);


    cout<<endl<<endl;
    //insert at tail

    InsertAtTail(tail,10);
    print(head);
    InsertAtTail(tail,20);
    InsertAtTail(tail,30);
    print(head);   

    return 0;
}