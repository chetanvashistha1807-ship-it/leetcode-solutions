//IMPLEMENTATION OF BINARY TREE:-
/*Example:-      10 

             20         30

        40      50     60    70

    80                                           */

#include <iostream>
using namespace std;

//creating a node

struct Node{
    //it can store data.
    int data;
     
    //It has two pointers as left and right of datatype Node.
    Node* left;
    Node* right;

    //Construstor which assigns the value to data and null to left and right initially.

    Node(int val){
        data = val;
        left = right = nullptr;
    }



    
};

int main(){
    //root is the pointer which stores the address of the Node whose data is 10.
    Node*root = new Node(10);
    
    //accessing the left and right pointer via root and assigning values to it's left and right pinters.
    //Level 1.
    root ->left = new Node(20);
    root ->right = new Node(30);

    //Just repeating the process and making the level 2 of desired tree.
    root ->left->left = new Node(40);
    root ->left->right = new Node(50);
    root ->right->left = new Node(60);
    root ->right->right = new Node(70);

    //Level 3

    root ->left ->left->left = new Node(80);


    return 0;

}