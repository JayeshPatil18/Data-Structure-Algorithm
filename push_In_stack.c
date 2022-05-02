#include<stdio.h>
#include <stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};

int isFull(struct stack*ptr)
{
    if(ptr->top>ptr->size-1)
    {
        return 1;
    }
    else {
        return 0;
    }

}
int main()
{
    struct stack*sp;
    sp->size=8;
    sp->top=-1;
    sp->arr=(int*)malloc(sp->size*sizeof(int));
    int val=44;

    if(isFull(sp))
    {
        printf("stak is full\n");
    }
    else
    {
        sp->top++;
        sp->arr[sp->top]=val;

        printf("anser == %d\n",sp->arr[sp->top]);

    }

    return 0;
}