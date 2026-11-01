#include <iostream>
using namespace std;

struct Node{
    int data;

    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left = right = nullptr;
    }


};


void preorder(Node* root){
    if(root==nullptr)return;
    
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main(){
    Node* root = new Node(3);
    root->left = new Node(6);
    root->right = new Node(9);

    root->left->left = new Node(10);

    preorder(root);

    return 0;
}