#include<iostream>
#include<queue>
#include<stack>
using namespace std;

class node {
public: 
    int data;
    node* right;
    node* left;

    node(int data) {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};


void preOrder(node* root) {
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
    return;
}
void preOrder_iter(node* root) {
    stack<node*> st;
    if(root==NULL)
        return;
    node* temp=root;
    while(temp!=NULL) {
        cout<<temp->data<<" ";
        st.push(temp);
        temp=temp->left;

        while(temp==NULL && !st.empty()) {
            temp=st.top()->right;
            st.pop();
        }
    }
}

//      TESTING CODE

//    TESTING CODE
node* buildTree(node* root) {
    cout<<"enter the data: "<<endl;
    int data;
    cin>>data;
    root=new node(data);

    if(data==-1){
        return NULL;
    }
    cout<<"enter the data for inserting in left of "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"enter the data for inserting in right of "<<data<<endl;
    root->right=buildTree(root->right);
 }
 void levelOrderTraversal(node* root) {

    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        node* temp=q.front();
        q.pop();

        if(temp==NULL) {
            cout<<endl;
            if(!q.empty()) 
                q.push(NULL);

        }
        else {
            cout<<temp->data<<" ";
            if(temp->left) 
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
            
        }
    }

}

 int main() {
    
    //creation of root node
    node* root=NULL;
    //creation of binary tree
    root=buildTree(root);

    levelOrderTraversal(root);
    preOrder(root);
    cout<<"recursive ends"<<endl;

    preOrder_iter(root);
    return 0;
 }

 //test input
 //10 5 0 -1 -1 7 -1 -1 15 12 -1 -1 20 -1 -1