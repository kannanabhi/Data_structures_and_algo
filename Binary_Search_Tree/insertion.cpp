#include<iostream>
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
void insertIntoTree(Node* root,int value) {

    return;
}
void buildTree(Node* &root) {
    int value;
    cin>>value;
    while(value!=-1) {
        insertIntoTree(root,value);
        cin>>value;
    }
}

int main() {
    Node* root=NULL;
    cout<<"intput the elements to be entered"<<endl;
    buildTree(root);

    return 1;
}