#include<iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct node {
   int data; 
	
   struct node *leftChild;
   struct node *rightChild;
};

struct node *root = NULL;


void insert(int data) {
   struct node *tempNode = (struct node*) malloc(sizeof(struct node));
   struct node *current;
   struct node *parent;

   tempNode->data = data;
   tempNode->leftChild = NULL;
   tempNode->rightChild = NULL;

   //if tree is empty
   if(root == NULL) {
      root = tempNode;
   } else {
      current = root;
      parent = NULL;

      while(1) { 
         parent = current;
         if(data < parent->data) {
            current = current->leftChild;                
            if(current == NULL) {
               parent->leftChild = tempNode;
               return;
            }
         }  
         else {
            current = current->rightChild;
            if(current == NULL) {
               parent->rightChild = tempNode;
               return;
            }
         }
      }            
   }
}

struct node* search(int data) {
   struct node *current = root;

   while(current->data != data) {
      if(current != NULL)
         printf("%d ",current->data); 
      if(current->data > data) {
         current = current->leftChild;
      }
      else {                
         current = current->rightChild;
      }
      if(current == NULL) {
         return NULL;
      }
   }
   return current;
}

//POST ORDER CODE...!
void post_order_traversal(struct node* root) {
   if(root != NULL) {
      post_order_traversal(root->leftChild);
      post_order_traversal(root->rightChild);
      cout << root->data<<endl;

   }
}

int main() {
   int i;
   //DELCLARATION OF ARRAY OF SIZE N
   int n;
   cout<<"Enter the size of Array"<<endl;
   cin >> n;
   int array[n],f;
   for(f=0;f<=n-1;f++){
       cout<<"Enter the element : "<<endl;
       cin>>array[f];
   }
   for(i = 0; i <=n-1; i++)
      insert(array[i]); //FUNCATION CALL FOR INSERTION IN TREE
      cout<< "Element To Search : "<<endl;
      cin >> i;
   struct node * temp = search(i);
    if(temp!= NULL) {
        cout<<"["<<temp->data<<"]"<<endl;
   }else {
       cout << "\nElement Not Found"<<endl;
   }
   cout<<"Post order traversal : "<<endl;
   post_order_traversal(root);       

   return 0;
}