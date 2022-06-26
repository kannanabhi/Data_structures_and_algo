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

//insert at a particular position
void insertPos(node* &head,node* &tail,int pos,int value) {
    node* temp=head;
    int cnt=1;

    while(cnt<pos-1) {
        temp=temp->next;
        cnt++;
    }

    node* newnode=new node(value);

    //special case for inserting in the tail 
    if(temp->next==NULL) {
        temp->next=newnode;
        tail=newnode;
        return;
    }

    //special case for inserting at the head
    if(pos==1) {
        newnode->next=temp;
        head=newnode;    
    } 
    else {
        newnode->next=temp->next;
        temp->next=newnode;
    }

}



void display(node * &head) {
    node* temp=head;
    while(temp!=NULL) {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main() {
    node* node1= new node(10);
    node* head=node1;
    node* tail=node1;


    display(head);
    insertPos(head,tail,2,20);
    insertPos(head,tail,2,30);
    insertPos(head,tail,4,40);
    display(head);
    insertPos(head,tail,1,50);
    display(head);

    return 0;
}