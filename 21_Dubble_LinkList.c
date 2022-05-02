#include <stdio.h>
#include <stdlib.h>
 
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};
 
void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
 
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
 
    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
 
    // Link first and second nodes
    head->prev = NULL;
    head->data = 45;
    head->next = second;
 
    // Link second and third nodes
    second->prev = head;
    second->data = 31;
    second->next = third;
 
    // Link third and fourth nodes
    third->prev = second;
    third->data = 11;
    third->next = fourth;
 
    // Terminate the list at the third node
    fourth->prev = third;
    fourth->data = 31;
    fourth->next = NULL;

    linkedListTraversal(head);
    return 0;
}
