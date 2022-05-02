//wrong try by me
// No source code by harry

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    int top;
    int *arr;
    struct Node *next;
};

// struct stack{
//     int size;
// };

int isEmpty(struct node*ptr)
{
    if (ptr==NULL)
    {
       printf("empty\n");
       return 1;
    }
    
}
int isFull(struct node*ptr)
{
    if (ptr==NULL)
    {
       printf("fyll\n");
       return 1;
    }
    
}

int push(struct node*ptr,int val)
{
    ptr->top++;
    ptr->arr[ptr->top]=val
}
int main()
{
    struct Node *top;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    top = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    top->data = 7;
    top->next = second;
 
    // Link second and third nodes
    second->data = 11;
    second->next = third;
 
    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;
 
    // Terminate the list at the third node
    fourth->data = 66;
    fourth->next = NULL;

    
    push(top, 1);
    
    return 0;
}
