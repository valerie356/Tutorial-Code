// main.c
// Program to test simple linked lists functions

#include <stdio.h>
#include <stdlib.h>

struct node {
    // The data stored in the node
    int data;
    // Pointer to the next node in the linked list
    struct node *next;
};

// Creates a new node
//
// Parameters:
//      data: The data to be stored in the new node
//
// Returns:
//      A pointer to the new node
struct node *create_node(int data);

// Inserts a new node at the head of a linked list
//
// Parameters:
//      head: A pointer to the head of the linked list
//      data: The data to be stored in the new node
//
// Returns:
//      A pointer to the new head of the linked list
struct node *insert_head(struct node *head, int data);

// Inserts a new node at the tail of a linked list
//
// Parameters:
//      head: A pointer to the head of the linked list
//      data: The data to be stored in the new node
//
// Returns:
//      A pointer to the head of the linked list
struct node *insert_tail(struct node *head, int data);

// Traverses a linked list and prints the data in each node
//
// Parameters:
//      head: A pointer to the head of the linked list
//
// Returns:
//      None
void print_list(struct node *head);

// Finds the number of nodes in a linked list
//
// Parameters:
//      head: A pointer to the head of the linked list
//
// Returns:
//      The number of nodes in the linked list
int list_length(struct node *head);

// Removes the tail of a linked list
//
// Parameters:
//      head: A pointer to the head of the linked list
//
// Returns:
//      A pointer to the head of the linked list
struct node *remove_tail(struct node *head);

int main(void) {

    // Create a pointer to the head of the linked list
    struct node *head = NULL;

    // Insert a node at the beginning of the linked list
    head = insert_head(head, 10);

    // Insert a node at the beginning of the linked list
    head = insert_head(head, 5);

    // Insert a node at the end of the linked list
    head = insert_tail(head, 15);

    // Insert a node at the end of the linked list
    head = insert_tail(head, 20);

    // Print the linked list
    print_list(head);

    // Calculate and print the length of the linked list
    int length = list_length(head);
    printf("There are %d nodes in the list\n", length);
    
    // Remove the last node from the linked list
    head = remove_tail(head);

    // Print the linked list
    print_list(head);

    // Calculate and print the length of the linked list
    length = list_length(head);
    printf("There are %d nodes in the list\n", length);

    return 0;
}


struct node *create_node(int data) {
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;

    return new_node;
}

struct node *insert_head(struct node *head, int data) {
    // Create a new node
    struct node *new_node = create_node(data);
    new_node->next = head;

    return new_node;
}

struct node *insert_tail(struct node *head, int data) {
    // Create a new node
    struct node *new_node = create_node(data);

    // If the linked list is empty, return the new node
    if (head == NULL) {
        return new_node;
    }

    // Traverse the linked list to find the last node
    struct node *current = head;
    while (current->next != NULL) {
        current = current->next;
    }

    // Insert the new node at the end of the linked list
    current->next = new_node;

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
    // Initialize the length of the list to 0
    int length = 0;

    // Set current to be the first node in the list
    struct node *current = head;

    // Traverse the linked list and increment the length
    // until we reach the end of the list
    while (current != NULL) {
        length++;
        current = current->next;
    }

    return length;
}

struct node *remove_head(struct node *head) {
    // TODO: implement function
    // If list is empty return null
    if (head == NULL) {
        // Or can return head
        return NULL;
    }

    // Case 2: 1 node in the list
    if (head->next == NULL) {
        free(head);
        return NULL;
    }
    // Multiple nodes ('usual' case)
    struct node *new_head = head->next;
    free(head);

    return new_head;
}

struct node *remove_tail(struct node *head) {
    // TODO: implement function

    if (head == NULL) {
        return NULL;
    }
    if (head->next == NULL) {
        free(head);
        return NULL;
    }
    
    struct node *prev = NULL;
    struct node *curr = head;

    // curr != NULL
    // curr->next != NULL
    while (curr->next != NULL) {
        prev = curr;
        curr = curr->next;
    }

    // Here: 
    // Curr is the last node
    // Prev is the 2nd last node
    free(curr);
    prev->next = NULL;
    return head;
}