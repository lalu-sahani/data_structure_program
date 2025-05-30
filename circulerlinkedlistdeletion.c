// in this program we will understand that how we can delete a first node in circuler linked list. 
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

//  this function craete a last node in linked list and connect last node with first node .

void insertEnd(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    if (head == NULL) {
        head = newNode;
        newNode->next = head;
    } else {
        struct Node* temp = head;
        while (temp->next != head)
            temp = temp->next;
        temp->next = newNode;
        newNode->next = head;
    }
}

// this function delete first node in circuler linked list .

void deleteBeginning() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = head;
    struct Node* last = head;

    while (last->next != head)
        last = last->next;
      
    //if only one node in list then if block will be execute otherwise else block will be executed.  

    if (head->next == head) {
        free(head);
        head = NULL;
    } else {
        head = head->next;
        last->next = head;
        free(temp);
    }
}

void display() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = head;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}

int main() {
    insertEnd(5);
    insertEnd(10);
    insertEnd(15);
    insertEnd(20);
    printf("before deleteing the first node\n");
    display();

    printf("Deleting from beginning...\n");
    deleteBeginning();
    printf("after deleteing the first node in circuler linked list.\n");
    display();

    return 0;
}
