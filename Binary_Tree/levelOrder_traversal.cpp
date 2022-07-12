#include<iostream>
#include<queue>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;

    node(int data) {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

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

    levelOrderTraversal(root);
    return 0;
 }

 //test input
 //10 5 0 -1 -1 7 -1 -1 15 12 -1 -1 20 -1 -1