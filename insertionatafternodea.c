/*insert in between a new node in linked list*/
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

   struct node * insertAfterNode(struct node *head, struct node* prevnode,int data){
    struct node * ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next= prevnode->next;
    prevnode->next=ptr;

    return head;
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

printf("before insertion\n");
linkeslisttraversal(head);
// head = insertAtFirst(head,56);
// head = insertAtIndex(head,56,2);
head= insertAfterNode(head, second,45);
printf("after insertion\n");
linkeslisttraversal(head);


    

    return 0;
}
