#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data=data;
        this->right=NULL;
        this->left=NULL;
    }
};

//code for finding the MIN and MAX element
Node* minVal(Node* root) {
    Node* temp=root;
    //base case
    if(temp==NULL)
        return NULL;
    while(temp->left!=NULL) {
        temp=temp->left;
    }
    return temp;
}
Node* maxVal(Node* root) {
    Node* temp=root;
    //base case
    if(temp==NULL)
        return NULL;
    while(temp->right!=NULL)
        temp=temp->right;
    return temp;
}

//testing code
Node* insertIntoTree(Node* root,int value) {
    //base case
    if(root==NULL) {
        root=new Node(value);
        return root;
    }
    //if the value is greater insert to right sub-tree
    if(value>root->data) {
        root->right=insertIntoTree(root->right,value);
    }
    //if the value is smaller insert to left sub-tree
    else if(value<root->data) {
        root->left=insertIntoTree(root->left,value);
    }
    return root;
}
void buildTree(Node* &root) {
    int value;
    cin>>value;
    while(value!=-1) {
        root=insertIntoTree(root,value);
        cin>>value;
    }
}
int main() {
    Node* root=NULL;
    cout<<"intput the elements to be entered"<<endl;
    /* test case for input
    10 8 21 7 27 5 4 3 -1
    */
    buildTree(root);

    //level order traversal for checking
    Node* mini=minVal(root);
    Node* maxi=maxVal(root);
    cout<<"min value is "<<mini->data<<endl<<"max value is "<<maxi->data<<endl;

    return 1;
}