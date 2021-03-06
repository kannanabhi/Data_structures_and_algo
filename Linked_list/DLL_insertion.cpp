#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    node* prev;

    node(int value) {
        this->data=value;
        this->next=NULL;
        this->prev=NULL;
    }
};

void print(node* head) {
    node* temp=head;

    while(temp!=NULL) {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int getLength(node* head) {
    node* temp=head;
    int count=0;


    while(temp!=NULL) {
        temp=temp->next;
        count++;
    }
    return count;
}

void insertHead(node* &head,node* &tail,int value) {
    node* temp=new node(value);
    if(head==NULL) {
        head=temp;
        tail=temp;
    }
    else {
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
}

void insertTail(node* &head,node* &tail,int value) {
    node* temp=new node(value);

    if(tail==NULL) {
        tail=temp;
        head=temp;
    }
    else {
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }


}

void insertPos(node* &head,node* &tail,int pos,int value) {
    if(pos==1) {
        insertHead(head,tail,value);
        return;
    }
    node * temp=head;
    int count=1;
    while(count<pos-1) {
        temp=temp->next;
        count++;
    }

    if(temp->next==NULL) {
        insertTail(head,tail,value);
        return;
    }

    node* newnode= new node(value);
    temp->next->prev=newnode;
    newnode->next=temp->next;
    newnode->prev=temp;
    temp->next=newnode;
    return;
    
}

int main() {

    node* head=NULL;
    node* tail=NULL;
    print(head);



    insertHead(head,tail,20);
    insertPos(head,tail,1,10);
    print(head);
    insertTail(head,tail,40);


    insertPos(head,tail,4,50);
    print(head);

    cout<<"length of the linked list is "<<getLength(head)<<endl;


    return 0;
}