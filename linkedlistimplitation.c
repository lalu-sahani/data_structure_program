#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};

void linkeslisttraversal(struct node* ptr)
{
    while (ptr != NULL)
    {
        printf(" element = %d\n",ptr->data);
    ptr=ptr->next;
        
    }
    
    
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


linkeslisttraversal(head);


    return 0;
}
