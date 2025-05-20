// IN this program we will understand that how we can delete any node with his given index number 

#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
}; 

// A function for printing and traversing linked list

void traversal(struct node *ptr)
{
    while (ptr!=NULL)
    {
        printf("Element = %d\n", ptr->data);
        ptr = ptr->next;
    }

}

// creating a function for delete the node with his index number

struct node * deleteatindex(struct node *head, int index)
{
    struct node *p = head;
    struct node *q = head->next;
    for ( int i=0; i<index-1; i++)
    {
        p = p->next;
        q= q->next;
    }
     p->next = q->next;
     free(q);
     return head;
}


int main()
{
  struct node *head;
  struct node *second;
  struct node *third;
  struct node *fourth;

//   here we declare a memory for each node 
head = (struct node *)malloc(sizeof(struct node));
second = (struct node *)malloc(sizeof(struct node));
third = (struct node *)malloc(sizeof(struct node));
fourth = (struct node *)malloc(sizeof(struct node));

//   here we insert data in every node and linked with each other

head ->data = 4;
head -> next = second;
// linked second node with third node
second->data = 8;
second->next = third;
// linked third node with the fourth node 
third->data = 12;
third->next = fourth;
// last node of the linked list
fourth->data = 16;
fourth->next = NULL;

printf("Before deleting \n");
traversal(head);
 head = deleteatindex(head , 1);

printf("After deleting\n");
traversal(head);


    return 0;
}
