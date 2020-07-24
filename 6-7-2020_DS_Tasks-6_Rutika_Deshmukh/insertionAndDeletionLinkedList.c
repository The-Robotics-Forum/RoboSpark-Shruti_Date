#include <stdio.h> 
#include <stdlib.h> 
  
// A linked list node 
struct Node 
{ 
  int data; 
  struct Node *next; 
}; 
  
// adding node at the start:
void add_at_beg (struct Node** head_ref, int new_data) 
{ 
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); 

    new_node->data  = new_data; 
  
    new_node->next = (*head_ref); 
 
    (*head_ref)  = new_node; 
} 
  
//inserting node in the middle:
void insertAfter(struct Node* prev_node, int new_data) 
{ 
    if (prev_node == NULL) 
    { 
      printf("the given previous node cannot be NULL"); 
      return; 
    } 
    
    struct Node* new_node =(struct Node*) malloc(sizeof(struct Node)); 
  
    new_node->data  = new_data; 
  
    new_node->next = prev_node->next; 
  
    prev_node->next = new_node; 
} 
  
// inserting node at end :
void add_at_end (struct Node** head_ref, int new_data) 
{ 
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); 
  
    struct Node *last = *head_ref;  
  
    new_node->data  = new_data; 
  
    new_node->next = NULL; 
  
    
    if (*head_ref == NULL) 
    { 
       *head_ref = new_node; 
       return; 
    } 
  
   
    while (last->next != NULL) 
        last = last->next; 
  
  
    last->next = new_node; 
    return; 
} 
  
// printing list
void printList(struct Node *node) 
{ 
  while (node != NULL) 
  { 
     printf(" %d ", node->data); 
     node = node->next; 
  } 
}

//deletion of a node :
void delete ( struct Node* head, int val)
{
    while(head->next->data != val)
    {
        head = head->next;
    }
    struct Node* del = head->next;
    head->next= head->next->next;
    free(del);
}
  

int main() 
{ 

  struct Node* head = NULL; 
 
  add_at_end(&head, 6);
  printf("\n Linked list is: "); 
  printList(head);
  
  add_at_beg(&head, 7);
  printf("\n Linked list is: "); 
  printList(head);
  
  add_at_beg(&head, 1);
  printf("\n Linked list is: "); 
  printList(head);
 
  add_at_end(&head, 4); 
  printf("\n Linked list is: "); 
  printList(head);
  
  insertAfter(head->next, 8);
  printf("\n Linked list is: "); 
  printList(head); 
  
  insertAfter(head->next, 32);
  printf("\n Linked list is: "); 
  printList(head); 
  
  
  delete(head, 32);
  printf("\n Linked list is: "); 
  printList(head); 
  
  return 0; 
}