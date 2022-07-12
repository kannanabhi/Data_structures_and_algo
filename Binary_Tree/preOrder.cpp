#include<iostream>
#include<queue>
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
 int main() {
    
    //creation of root node
    node* root=NULL;
    //creation of binary tree
    root=buildTree(root);

    preOrder(root);
    return 0;
 }

 //test input
 //10 5 0 -1 -1 7 -1 -1 15 12 -1 -1 20 -1 -1