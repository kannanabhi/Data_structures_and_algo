#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int value) {
        this->data=value;
        this->next=NULL;
    }
    ~node() {
        int value=this->data;
        if(this->next!=NULL) {
            delete next;
            this->next=NULL;
        }
        cout<<" node with data "<<value<<" is deleted"<<endl;
    }
};

node* floydLoop(node * head) {
    if(head==NULL) 
        return NULL;
    node* slow=head;
    node* fast=head;

    while(slow!=NULL && fast!=NULL ) {
        fast=fast->next;
        if(fast!=NULL) {
            fast=fast->next;
        }
        slow=slow->next;

        if(fast==slow) 
            return slow;
    }
    return NULL;
}

node* startOfloop(node* head) {

    if(head==NULL) 
        return NULL;

    node* slow=head;
    node* fast=floydLoop(head);

    //if there is no loop we return NULL
    if(fast==NULL) 
        return NULL;

    while(slow!=fast) {
        slow=slow->next;
        fast=fast->next;
    }
    return slow;
}