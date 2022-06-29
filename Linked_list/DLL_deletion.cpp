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
    ~node() {
        int value=this->data;
        if(this->next!=NULL) {
            delete next;
            next=NULL;
        }
        cout<<"memory is deleted for the value "<<value<<endl;
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


void deleteNode(node* &head,node* &tail,int position) {
    node* curr=head;
    node* previ=NULL;

    if(position==1) {
        //deletion of first node, thus move the head
        head=curr->next;
        curr->next->prev=NULL;
        curr->next=NULL;
        delete curr;
        return;
    }
    else {
        //deletion of non-first node
        int count=1;
        while(count<position) {
            previ=curr;
            curr=curr->next;
            count++;
        }

        previ->next=curr->next;
        if(curr->next==NULL) {
            //if we are deleting the tail node
            tail=previ;
            curr->next=NULL;
            curr->prev=NULL;  
            delete curr;
            return;  
        }
        curr->next->prev=curr->prev;
        curr->next=NULL;
        curr->prev=NULL;
        delete curr;

    }

}







/*    INSERTION CODE
    which is used only for the testing purposes
*/
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

/*  CODE FOR TESTING IS COMPLETE 
*/

int main() {
    node* head=NULL;
    node* tail=NULL;

    insertPos(head,tail,1,10);
    insertPos(head,tail,1,20);
    insertPos(head,tail,3,30);
    insertPos(head,tail,2,40);
    insertPos(head,tail,5,50);
    print(head);
    cout<<"value of head is "<<head->data<<endl;
    cout<<"value of tail is "<<tail->data<<endl;
    print(head);
    deleteNode(head,tail,1);
    print(head);
    cout<<"value of head is "<<head->data<<endl;
    cout<<"value of tail is "<<tail->data<<endl;  
    deleteNode(head,tail,2);
    print(head);
    cout<<"value of head is "<<head->data<<endl;
    cout<<"value of tail is "<<tail->data<<endl;     
    deleteNode(head,tail,3);
    print(head);
    cout<<"value of head is "<<head->data<<endl;
    cout<<"value of tail is "<<tail->data<<endl;  
    return 0;
}