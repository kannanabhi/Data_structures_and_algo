#include<iostream>
#include<queue>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

//code for deletion

//code for testing
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
void levelOrderTraversal(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        Node* temp=q.front();
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
Node* minVal(Node* root) {
    //base case
    if(root==NULL) 
        return NULL;
    Node* temp=root;
    while(root->left!=NULL) {
        temp=temp->left;
    }
    return temp;
}
Node * deleteNode(Node* root,int value) {
    //base case
    if(root==NULL)
        return root;
    //recursive traversal to find the element
    if(root->data==value) {
        //0 child case
        if(root->left==NULL && root->right==NULL) {
            delete root;
            return NULL;
        }
        //1 child case
        //left child 
        if(root->left!=NULL && root->right==NULL) {
            Node * temp=root->left;
            delete root;
            return temp;
        }
        //right child
        if(root->right!=NULL && root->left==NULL) {
            Node* temp=root->right;
            delete root;
            return temp;
        }
        //2 child case
        if(root->right!=NULL && root->left!=NULL) {
            //here we are finding the in order successor
            int minimum=minVal(root->right)->data;
            root->data=minimum;
            root->right=deleteNode(root->right,minimum);
            return root;

        }

    }
    else if (root->data > value) {
        root->left=deleteNode(root->left,value);
        return root;
    }
    else {
        root->right=deleteNode(root->right,value);
        return root;
    }

}
int main() {
    Node* root=NULL;
    cout<<"intput the elements to be entered"<<endl;
    /* test case for input
    10 5 15 0 7 12 20 -1
    */
    buildTree(root);

    //level order traversal for checking
    levelOrderTraversal(root);
    cout<<endl;
    root=deleteNode(root,12);
    cout<<endl;
    levelOrderTraversal(root);
    cout<<endl;

    return 1;
}