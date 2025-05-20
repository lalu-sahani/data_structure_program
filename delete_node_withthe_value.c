// program for delete a node in linked list by given value

#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node * next;
};

void traversal(struct node * ptr){
    while (ptr!=NULL)
    {
        printf("Element = %d\n",ptr->data);
        ptr = ptr->next; 
    }
    
}

 struct node * deleteAtValue ( struct node *head, int value){
    struct node* p = head;
    struct node* q = head->next;
    while (q->data!=value && q->next!= NULL)
    {
        p = p->next;
        q = q->next;
    }

    if(q->data==value)
    {
        p->next = q->next;
        free(q);
    }
    return head;
 }

int main()
{
    struct node * head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));

    head->data = 6;
    head->next = second;

    second->data = 12;
    second->next = third;

    third->data = 18;
    third->next = fourth;

    fourth->data =24;
    fourth->next =NULL;

    printf("Before deletion\n"); 
    traversal(head);
    printf("After deletion\n");
    head = deleteAtValue(head,24);
    traversal(head);

    return 0;

}