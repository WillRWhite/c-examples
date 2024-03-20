// Check comments (1) & (2) for alternate code. 
// (1) refers to dereferencing a pointer to a sturcture
// (2) refers to using a daya type rather than a structure directly

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct node 
{
   int data;
   struct node *next;
}
node;
node *head = NULL;
node *current = NULL;

//(1) The above typedef instead on commented lines below
//(1) See further below (1) for additional changes
//(1)struct node {
//(1)   int data;
//(1)   struct node *next;
//(1)};
//(1)struct node *head = NULL;
//(1)struct node *current = NULL;

// display the list
void printList(){
   //(1)struct node *p = head;
   node *p = head;
   printf("\n[");
   
   //start from the beginning
   while(p != NULL) {
      //(2)printf(" %d ",p->data);
      printf(" %d ",(*p).data);
      //(2)p = p->next;
      p = (*p).next;
    //(2) Note that <p->data == (*p).data> & <p = p->next == p = (*p).next>
   }
   printf("]");
}

//insertion at the beginning
void insertatbegin(int data){
   
   //create a link
   //(1)struct node *lk = (struct node*) malloc(sizeof(struct node));
   node *lk = (node*) malloc(sizeof(node));
   lk->data = data;
   
   // point it to old first node
   lk->next = head;
   
   //point first to new first node
   head = lk;
}
void main(){
   int k=0;
   insertatbegin(12);
   insertatbegin(22);
   insertatbegin(30);
   insertatbegin(44);
   insertatbegin(50);
   printf("Linked List: ");
   
   // print list
   printList();
   printf("\n");
}