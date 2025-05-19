/*insert in last a new node in linked list*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
};

void linkeslisttraversal(struct node* ptr)
{
    while (ptr != NULL)
    {
        printf(" element = %d\n",ptr->data);
    ptr=ptr->next;
        
    }
}

struct node * insertAtLast(struct node *head, int data){
    struct node * ptr= (struct node*)malloc(sizeof(struct node));
    ptr->data=data;
   struct node * p = head;
//    int i =0;
   while (p->next!=NULL)
   {
    p = p->next;

   }
   p->next = ptr;
   ptr->next= NULL;
    return head;
    
    
    
    ; /* struct node * ka malab yah ek pointer return karega jo struct node type ka hoga */
}

int main()
{

struct node * head;
struct node * second;
struct node * third;
/* alllocate memory for nodes in the linked in heap*/
head = (struct node *)malloc(sizeof(struct node));
second = (struct node *)malloc(sizeof(struct node));
third = (struct node *)malloc(sizeof(struct node));
/* link first and seconds nodes*/
head->data=4;
head->next=second;
 
/* link seconds and thire nodes*/
second->data=7;
second->next=third;
 
third->data=8;
third->next=NULL;

printf("linked list before insertion\n");
linkeslisttraversal(head);
// head = insertAtFirst(head,56);
head = insertAtLast(head,56);

printf("linked list after insertion\n");
linkeslisttraversal(head);


    

    return 0;
}
