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
};

bool isCircular(node* head) {
    //we assume it is circular if it is an empty node
    if(head==NULL) 
        return true;
    node* temp=head->next;
    while(temp!=NULL && temp!=head) {
        temp=temp->next;
    }
    if(temp==head) 
        return true;
    else {
        return false;
    }
}

/* WE INSERT CODE FOR INSERTION OF LINKED LIST AND CIRCULAR LINKED LIST 
    only for testing purposes
*/
void LLInsertHead(node* &head,int value) {
    node* temp=new node(value);
    temp->next = head;
    head=temp;
}    

void CLinsertion(node* &tail,int target,int value) {
    //we will insert the element value after we have found the element target
    node* temp=new node(value);
    //for empty list
    if(tail==NULL) {
        tail=temp;
        temp->next=temp;
        return;
    }
    else {
        //this is for non empty list
        //note that algo for 1element list and other list can be generalized

        //we assume that the target element exist in list
        node* curr=tail;

        while(curr->data!=target) {
            curr=curr->next;
        }

        temp->next=curr->next;
        curr->next=temp;
        return;
    }
}
int main() {
    node* head=NULL;
    node* tail=NULL;

    // LLInsertHead(head,10);
    // LLInsertHead(head,20);
    // LLInsertHead(head,30);
    // LLInsertHead(head,40);
    // bool value=isCircular(head);
    
    // CLinsertion(tail,5,10);
    // CLinsertion(tail,10,20);
    // CLinsertion(tail,20,30);
    // CLinsertion(tail,30,40);

    bool value=isCircular(tail);
    if(value) {
        cout<<"the list is circular "<<endl;
    }
    else {
        cout<<"the list is not circular"<<endl;
    }
}