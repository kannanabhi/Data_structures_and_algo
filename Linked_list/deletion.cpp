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
        while(this->next!=NULL) {
            delete next;
            this->next=NULL;
        }
        cout<<"the node with value of "<<value<<" is deleted"<<endl;
    }
};

void display(node* &head) {
    node* temp=head;

    while(temp!=NULL) {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void deleteNode(node* &head,node* &tail,int pos) {
    node* prev=NULL;
    node* curr=head;

    if(pos==1) {
        head=head->next;
        curr->next=NULL;
        delete curr;
        return ;
    }
    int count=1;
    while(count<pos) {
        prev=curr;
        curr=curr->next;
        count++;
    }

    //deleting the intermidiate node
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;

    if(prev->next==NULL) {
        tail=prev;
    }
}



/*  insertion code only for testing purposes */
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




int main() {
    node* node1=new node(10);
    node* head=node1;
    node* tail=node1;

    display(head);
    insertPos(head,tail,2,20);
    insertPos(head,tail,3,30);
    insertPos(head,tail,4,40);
    insertPos(head,tail,5,50);
    display(head);

    cout<<endl<<endl;

    deleteNode(head,tail,1);
    display(head);
    cout<<"value of head is"<<head->data<<endl;
    cout<<"value of tail is"<<tail->data<<endl;
    deleteNode(head,tail,4);
    display(head);
    cout<<"value of head is"<<head->data<<endl;
    cout<<"value of tail is"<<tail->data<<endl;
    deleteNode(head,tail,2);
    display(head);
    cout<<"value of head is"<<head->data<<endl;
    cout<<"value of tail is"<<tail->data<<endl;
    return 0;
}