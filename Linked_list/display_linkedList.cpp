#include<iostream>
using namespace std;

class node {
public: 
    int data;
    node * next;

    node(int value) {
        this->data=value;
        this->next=NULL;
    }
};

void Inserthead(node* &head,int d) {
    node* temp=new node(d);
    temp->next=head;
    head=temp;
}


// code for displaying the linked list

void displayLL(node* &head) {
    node * temp=head;
    while(temp!=NULL) {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main() {
    node* node1=new node(10);
    node* head=node1;
    node* tail=node1;
    displayLL(head);
    Inserthead(head,20);
    Inserthead(head,30);
    Inserthead(head,40);
    displayLL(head);

    return 0;
}