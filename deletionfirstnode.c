// program for delete first node in linked list.

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

// creating a function for delete the first node

struct node *deleting_first_node(struct node *head)
{
    struct node *ptr = head;
    head = head->next;
    free(ptr);
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

head ->data = 3;
head -> next = second;
// linked second node with third node
second->data = 6;
second->next = third;
// linked third node with the fourth node 
third->data = 9;
third->next = fourth;
// last node of the linked list
fourth->data = 12;
fourth->next = NULL;

printf("Before deleting \n");
traversal(head);
 head = deleting_first_node(head);

printf("After deleting\n");
traversal(head);
    return 0;
}