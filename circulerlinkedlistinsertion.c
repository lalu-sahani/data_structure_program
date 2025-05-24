// in this program we will understand tht how to insert a new node in the front of head in circuler linked list
#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;

};

// this function is create for print the circuler linked list

void linked_traversal(struct node *head){
    struct node *ptr = head;
    do
    {

        printf("Element = %d\n",ptr->data);
        ptr = ptr->next;
    } while (ptr!= head);
    
}

//  this function is used for add a new node in the front of head

struct node * insear_at_first(struct node *head, int data){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;

    struct node *p = head->next;
    while(p->next != head){
        p=p->next;
    }

    // at this point p points to the last node of this circular linked list

    p->next = ptr;
    ptr->next = head;
    head = ptr;
     return head;


}


int main(){
// declaration of node

struct node *head;
struct node *second;
struct node* third;
struct node *fourth;

// allocation of memory
head = (struct node*)malloc(sizeof(struct node));
second =(struct node*)malloc(sizeof(struct node));
third = (struct node*)malloc(sizeof(struct node));
fourth=(struct node*)malloc(sizeof(struct node));

//here we connect every node with eachother

head->data=5;
head->next=second;

second->data=8;
second->next=third;

third->data=15;
third->next=fourth;

fourth->data=20;
fourth->next=head;
    printf("before insertion\n");
  linked_traversal(head);

  printf("\nAfter insertion \n");
  head = insear_at_first(head,40);
  linked_traversal(head);

    return 0;
}
