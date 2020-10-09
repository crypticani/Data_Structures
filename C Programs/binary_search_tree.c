#include <stdio.h>
#include <stdlib.h>
//import required header files
typedef struct node{   //creates a linked list
    int data;
    struct node* left;
    struct node* right;
}node;

node* NewNode(int data);  //prototypes a new node function
node* InsertNode(node* root, int data);   //prototypes insert function
node* SearchTree(node* root, int search);  //prototypes search function
void Inorder(node* Node);  //prototypes inorder function

void main(){
    node* root = NULL;   //initializes root as NULL
    int option, data, search;  //declares variables
    while(1){   //while loop if true
        printf("\n1. To insert an element into the BST.");
        printf("\n2. To search for an element in the BST.");
        printf("\n3. To print Inorder traversal of BST.");
        printf("\n4. Exit.");
        printf("\nEnter your choice: ");
        scanf("%d", &option);
        switch(option){  //swithch on choices
            case 1: printf("\nEnter an element to insert into the BST: ");
                scanf("%d", &data);
                if (root == NULL){
                    root = InsertNode(root, data);  //calls the insert function
                }
                else{
                    InsertNode(root, data);
                }
                break;
            case 2: printf("\nEnter an element to search: ");
                scanf("%d", &search);
                SearchTree(root, search);  //calls the function to search the element in tree
                break;
            case 3: printf("\nInorder Traversal: ");
                Inorder(root);  //calls the function to print the tree
                printf("\n");
                break;
            case 4: exit(0);  //exit the program
            default: printf("\nEnter a valid option!!!");  //print a message to the screen
        }
    }
}

node* NewNode(int data){
    node* temp = (node*)malloc(sizeof(node));  //allocates memory
    temp->data = data;   //sets data
    temp->left = temp->right = NULL;  //puts left and right nodes as NULL
    return temp;  //returns temp
}

node* InsertNode(node* Node, int data){  //function to create a node related to the value recieved
    if (Node == NULL){
        return NewNode(data);
    }
    if (data < Node->data){
        Node->left = InsertNode(Node->left, data);
    }
    else if (data > Node->data){
        Node->right = InsertNode(Node->right, data);
    }
    return Node;
}

node* SearchTree(node* Node, int search){   //function to search for element in the tree
    if (Node == NULL){
        printf("\nThe entered element is not found in the BTS!!!\n");
        return;
    }
    if (Node->data == search){
        printf("\nThe element %d is found in the BTS!!!\n", search);
        return;
    }
    if (search < Node->data){
        SearchTree(Node->left, search);
    }
    else if (search > Node->data){
        SearchTree(Node->right, search);
    }
}

void Inorder(node* Node){    //inorder traversal function
    if (Node == NULL){
        return;
    }
    Inorder(Node->left);
    printf("->  %d  ", Node->data);
    Inorder(Node->right);
}