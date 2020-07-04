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


// Addition of a new node :

void add(struct node* name, struct node* after, struct node* before)
{
    if(after->left== before)
    {
        after->left = name;
        name->left = before;
        name->right = NULL;
        printf("sucessfully inserted to the left!");
    }
    else if(after->right == before)
    {
        after->right == before;
        name->right = before;
        name->left = NULL;
        printf("sucessfully inserted to the right!");
    }
    else
    {
        printf("Either the argument 'after' or 'before' is invalid !!!");
    }
}


// Main function

int main()
{


// Memory allocation for nodes n filling of data : METHOD - 1

/*struct node* n1=(struct node*)malloc(sizeof(struct node));

n1->data=1;

struct node* n2=(struct node*)malloc(sizeof(struct node));

n2->data=2;

struct node* n3=(struct node*)malloc(sizeof(struct node));

n3->data=3;

struct node* n4=(struct node*)malloc(sizeof(struct node));

n4->data=4;

struct node* n5=(struct node*)malloc(sizeof(struct node));

n5->data=5;

struct node* n6=(struct node*)malloc(sizeof(struct node));

n6->data=6;

struct node* n7=(struct node*)malloc(sizeof(struct node));

n7->data=7;

struct node* n8=(struct node*)malloc(sizeof(struct node));

n8->data=8;

struct node* n9=(struct node*)malloc(sizeof(struct node));

n9->data=9;

struct node* n10=(struct node*)malloc(sizeof(struct node));

n10->data=10;*/


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

// ADD TO THE LEFT :
// creat a node that is to be added:

struct node* n11=newNode(11);


// adding or inserting of a node:

add(n11, n2, n4);
printf("\n");


//ADD TO THE RIGHT:
// creat a node that is to be added:

struct node* n12=newNode(12);


// adding of a node:

add(n12, n3, n7);
printf("\n");


//PASSING INVALID ARGUMENTS:
// creat a node that is to be added:

struct node* n13=newNode(13);


// adding of a node:

add(n13, n3, n4);
printf("\n");

return 0;
}