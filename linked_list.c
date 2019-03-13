//
// Created by Ivo Georgiev on 2019-03-07.
//

#include <stdio.h>
#include <stdlib.h>

struct LinkedList{
    int data;
    struct LinkedList *next;
};

struct LinkedList* head = NULL;
//struct LinkedList* current = NULL;
struct LinkedList* tail = NULL;



/*head->data = 1;
head->next = second;
second->data = 2;
second->next = tail;
tail->data = 3;
tail->next = NULL;
*/

void list_insert(int data) {

    //allocate new node, initialize to head
    if (head == NULL) {

        head = (struct LinkedList *) malloc(sizeof(struct LinkedList));
        head->next = 0;
        head->data = data;
        tail = head;
    }

    //append node to end of list if larger than tail
    else {
        if (data >= tail->data) {
            tail->next = (struct LinkedList *) malloc(sizeof(struct LinkedList));
            tail = tail->next;
            tail->data = data;
            tail->next = NULL;
        }
        //add to front of list if data less than head
        else if(data < head->data) {
            struct LinkedList *temp = head;
            head = (struct LinkedList*) malloc(sizeof(struct LinkedList));
            head->data = data;
            head->next = temp;
        }
    }

}

void printList(struct LinkedList *head)
{
    while (head != NULL)
    {
        printf(" %d ", head->data);
        head = head->next;
    }
}

void run_linked_list() {

    printf("Running linked list\n");
    list_insert(2);
    list_insert(4);
    list_insert(8);
    list_insert(1);
    printList(head);

}

/*
## Linked lists
1. Declare a node structure for a singly-linked list, holding a single `int` value.
2. Declare the list's `head` and `tail` pointers.
3. Initialize the linked list. What does an *empty* list look like?
4. Reason out the different assignment cases for the `list_insert` function. The nodes have to be inserted *in ascending order*. How should the pointer member of the node structure be initialized by default?
5. Implement the `list_insert` function, for all cases you came up with.
6. Test the function for all the cases. Run in the debugger to see if it works. Correct it.
 */