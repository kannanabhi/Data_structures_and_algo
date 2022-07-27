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

int main() {
    Node* root=NULL;
    cout<<"intput the elements to be entered"<<endl;
    /* test case for input
    10 8 21 7 27 5 4 3 -1
    */
    buildTree(root);

    //level order traversal for checking
    levelOrderTraversal(root);

    return 1;
}