// linked_list.c
// This program was written by YOUR-NAME (zID)
// Implementation for simple linked lists functions

#include <stdio.h>
#include <stdlib.h>

#include "linked_lists.h"

struct node *create_node(int data) {
    // TODO
    /*
    struct node {
        int data;
        struct node *next;
    };
    */
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;

    return new_node;
}

struct node *insert_head(struct node *head, int data) {
    // TODO
    struct node *new_node = create_node(data);
    new_node->next = head;
    head = new_node;
    return head;
}

struct node *insert_tail(struct node *head, int data) {
    // TODO
    struct node *new_node = create_node(data);

    // Case 1: No nodes in the list
    if (head == NULL) {
        head = new_node;
        return;
    }

    struct node *curr = head;
    // while (curr != NULL)
    // while (curr->next != NULL)
    while (curr->next != NULL) {
        curr = curr->next;
    }

    // EXIT WHILE -- curr is the lats node this line
    curr->next = new_node;
    return head;

    /*
    int i = 0;
    while () {
        i++;
    }
    */
}

struct node *insert_list(struct node *head, int data) {
    struct node *curr = head;
    struct node *prev = NULL;
    int i = 0;
    while (i < 2) {
        prev = curr;
        curr = curr->next;
        i++;
    }

    // Exit:
    // curr -> node after new node in the new linked list
    // prev -> node before new node in the new linked list
    new_node->next = curr;
    prev->next = new_node;
    return head;

}

void print_list(struct node *head) {
    // Set current to be the first node in the list
    struct node *current = head;
    
    // Traverse the linked list and print each node 
    // until we reach the end of the list
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("X\n");
}

int list_length(struct node *head) {
    // TODO
    sturct node *curr = head;
    int lenght = 0;
    while (current != NULL) {
        lenght++;
        curr = curr->next;
    }
    return lenght;
}
