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


//print function is different for a CLL
void print(node* tail) {
    node* temp=tail;
    do {
        cout<<temp->data<<" ";
        temp=temp->next;
    } while(temp!=tail);
    cout<<endl;
}

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
        curr->next=temp;
        return;
    }
}

int main() {
    node* tail=NULL;

    //inserting the first value
    insertNode(tail,5,1);
    print(tail);

    insertNode(tail,1,3);
    print(tail);
    insertNode(tail,3,5);
    insertNode(tail,3,4);
    print(tail);

    return 0;
}