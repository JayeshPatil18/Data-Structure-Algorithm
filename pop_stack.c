#include <stdio.h>
#include <stdlib.h>
 
struct stack
{
    int size;
    int top;
    int *arr;
};
 
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
 
 
int main()
{
    // struct stack s;
    // s.size = 80;
    // s.top = -1;
    // s.arr = (int *) malloc(s.size * sizeof(int));

    struct stack *s;
    s->size = 80;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    
    s->arr[0] = 7;
    s->top++;
        printf("the arr is : %d\n",s->arr[s->top]);
    s->arr[1] =8;
    s->top++;
        printf("the arr is : %d\n",s->arr[s->top]);

    if(isEmpty(s)){
        printf("The stack is empty\n");
        return -1;
    }
    else{
        printf("The stack is not empty\n");
        
       int val=s->arr[s->top];
        s->top=s->top-1;

        return val;   
        }
        
    return 0;

}