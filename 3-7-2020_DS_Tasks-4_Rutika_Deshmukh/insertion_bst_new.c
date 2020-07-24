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


// Insertion of nodes:

 void add(struct node* new, struct node* after)
 {

    //For insertion to the right :
     if(new->data > after->data)
     {
         if(after->right == NULL)
         {
             after->right = new;
         }
         else
         {
             add(new, after->right);
         }

     }
 


    //For insertion to the left:

     else if(new->data < after->data)
     {
         if(after->left == NULL)
         {
             after->left = new;
         }
         else
         {
             add(new, after->left);
         }

     }

     else
     {
        printf("\nPlease check the arguments"); 
     }
     //printf("Added sucessfully!!!");
     return new;
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
    int arr[10];
    printf("Enter the root for BST tree :");
    scanf("%d", &arr[0]);


    // for loop for rest of the elements:
    
    printf("Enter other 9 elements :");
    int i=0;
    for (i=1; i<10; i++)
    {
        scanf("%d", &arr[i]);
    }


    //Creating node for each arr element:
    
    printf("Data in the nodes created is as follows: ");
    struct node* n[10];
    for (i=0; i<10; i++)
    {
        n[i] =newNode(arr[i]);
        printf("%d ", n[i]->data);
    }
    

    //Insertion of each node :
    for(i=1; i<10; i++)
    {
        add(n[i],n[0]);
    }
    
     
    // Insertion 
    
    int num;
    printf("\n Enter the data of node to be added :");
    scanf("%d", &num);
    struct node* insert = newNode(num);
    add(insert, n[0] );

    // post order traversal:
    printf("Post Order Traversal : ");
    postOrder(n[0]);
    printf("\n");
    

return 0;
}