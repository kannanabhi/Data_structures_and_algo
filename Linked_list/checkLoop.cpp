#include<iostream>
#include<map>
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
            delete this->next;
            this->next=NULL;

        }
        cout<<"node with value "<<value<<" is deleted"<<endl;
    }
};

bool detectLoop(node* head) {
    if(head==NULL) 
        return false;
    map<node*,bool> visited;

    node* temp=head;
    while(temp!=NULL) {
        if(visited[temp]==true) 
            return true;
        visited[temp]=true;
        temp=temp->next;
    }
    return false;

}

bool floydLoop(node* head) {
    if(head==NULL) 
        return false;
    node* slow=head;
    node* fast=head;

    while(fast!=NULL && slow!=NULL) {
        fast=fast->next;
        if(fast!=NULL) 
            fast=fast->next;
        slow=slow->next;
        
        
        if(slow==fast) 
            return true;
        
    }
    return false;
}