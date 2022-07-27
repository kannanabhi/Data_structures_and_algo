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

void buildFrom_levelOrder(node* &root) {
    queue<node*> q;
    cout<<"enter the value of root node "<<endl;
    int rootval;
    cin>>rootval;
    root=new node(rootval);
    q.push(root);
    while(!q.empty()) {
        node* temp=q.front();
        q.pop();

        cout<<"value for left node of "<<temp->data<<endl;
        int leftNode;
        cin>>leftNode;
        if(leftNode!=-1) {
            temp->left= new node(leftNode);
            q.push(temp->left);
        }

        cout<<"value for right node of "<<temp->data<<endl;
        int rightNode;
        cin>>rightNode;
        if(rightNode!=-1) {
            temp->right= new node(rightNode);
            q.push(temp->right);
        }
        
    }
}


//      TESTING CODE

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
    buildFrom_levelOrder(root);

    levelOrderTraversal(root);
    return 0;
 }

