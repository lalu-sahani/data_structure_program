// Program for delete last node in linked list

#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

//function for traversing in linked list

void traversal(struct node * ptr)
{
    while (ptr!=NULL)
    {
        printf("Element = %d\n",ptr->data);
        ptr= ptr->next;
    }
    
}

// function for deleting the last node in the linked list

struct node* deletionatlast(struct node * head)
{
    struct node * p=head;
    struct node * q=head->next;
    while (q->next!=NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next=NULL;
    free(q);
    return head;
    
}


int main ()
{
     struct node* head;
     struct node * second;
     struct node * third;
     struct node * fourth;


     head = (struct node *)malloc(sizeof(struct node));
     second = (struct node *)malloc(sizeof(struct node));
     third = (struct node *)malloc(sizeof(struct node));
     fourth = (struct node *)malloc(sizeof(struct node));
     
    // connecting the first node with second node 

     head->data = 5;
     head->next = second;

   // connecting the second node with third node 
     second->data = 10;
     second->next = third;
   // connecting the third node with the fourth node    
     third->data = 15;
     third->next = fourth;
    // end of the linked list 
     fourth->data = 20;
     fourth->next = NULL;

     printf("Element before deletion\n");
     traversal(head);
     head=deletionatlast(head);
     printf("Element after deletion\n");
     traversal(head);

    return 0;
}