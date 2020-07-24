#include<stdio.h>
#include<stdlib.h>

//Creation of structure for node of tree :
 
 struct node
 {
     int data;
     struct node *left, *right;
 };

//Creation of a node and Initializing left n right node to null:
 
 struct node* newNode (int data)
 {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
     temp->data= data;
     temp->left= NULL;
     temp->right= NULL;
 }

// Post Order :

void postOrder (struct node* root)
{
    
    if (root == NULL)
    {
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    printf("%d  ", root->data);
}


// Main function

int main()
{

// Creation of new nodes: METHOD - 2

struct node* n1=newNode(1);

struct node* n2=newNode(2);

struct node* n3=newNode(3);

struct node* n4=newNode(4);

struct node* n5=newNode(5);

struct node* n6=newNode(6);

struct node* n7=newNode(7);

struct node* n8=newNode(8);

struct node* n9=newNode(9);

struct node* n10=newNode(10);


// Connecting nodes :

n1->left = n2;
n1->right = n3;

n2->left = n4;
n2->right = n5;

n3-> left = n6;
n3->right = n7;

n4->left = n8;

n6->left = n9;

n7->right = n10;


//struct node* newnode1=newNode(10);

printf("Post Order Traversal : ");
postOrder(n1);
printf("\n");

return 0;
}