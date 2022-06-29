#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* next;

    node(int value) {
        this->data=value;
        this->next=NULL;
    }

    ~node() {
        int val=this->data;
        if(this->next !=NULL) {
            delete next;
            next=NULL;
        }
        cout<<"memory free for node with data "<<val<<endl;
    }
};

void print(node* tail) {
    node* temp=tail;
    do {
        cout<<temp->data<<" ";
        temp=temp->next;
    } while( temp!=tail);
    cout<<endl;
}

/*   code for testing insertion    
    ONLY FOR TESTING
*/
void insertNode(node* &tail,int target,int value) {
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
        if(curr==tail) {
            tail=temp;
        }
        curr->next=temp;
        return;
    }
} 
/*   insertion code complete 
*/

void deleteNode(node* &tail,int target) {
    //empty list
    if(tail==NULL) {
        cout<<"the list is empty, thus deletion is not possible"<<endl;
        return;
    }
    else {
        //non-empty CLL

        //now we assume that the target integer is present in the linked list
        node* prev= tail;
        node* curr=prev->next;

        while(curr->data!=target) {
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;

        //for single node linked_list
        if(curr==prev) {
            tail=NULL;
        }
        else if(curr==tail) {
            //multi node list but we are deleting the tail element, then make the previous element as tail pointer
            tail=prev;
        }

        curr->next=NULL;
        delete curr;
    }
}

int main() {
    node* tail=NULL;

    insertNode(tail,5,1);
    insertNode(tail,1,3);
    insertNode(tail,3,5);
    insertNode(tail,5,7);
    insertNode(tail,7,9);
    print(tail);
    cout<<"value of tail is "<<tail->data<<endl;


    //deletion testing
    deleteNode(tail,3);
    cout<<"value of tail is "<<tail->data<<endl;
    deleteNode(tail,1);
    cout<<"value of tail is "<<tail->data<<endl;
    deleteNode(tail,9);
    cout<<"value of tail is "<<tail->data<<endl;

    return 0;
}