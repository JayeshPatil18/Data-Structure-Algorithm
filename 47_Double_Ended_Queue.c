//Code Try by me
#include<stdio.h>
#include<stdlib.h>

struct queue
{
    int r;
    int f;
    int size;
    int *arr;
};

int isFull(struct queue *q) 
{
    if (q->r==q->size-1 && q->f==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty(struct queue *q) 
{
    if (q->r==q->f)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void R_enqueue(struct queue *q,int val)
{
    if (isFull(q))
    {
        printf("The queue is full\n");
    }
    else
    {
        q->r++;
        q->arr[q->r]=val;

        printf("Enqueuing element at %d is %d\n", q->r,val);
    }
}
void F_enqueue(struct queue *q,int val)
{
    if (isFull(q))
    {
        printf("The queue is full\n");
    }
    else
    {
        q->f--;
        q->arr[q->f]=val;

        printf("Enqueuing element at %d is %d\n", q->f,val);
    }
}

int F_dequeue(struct queue*q)
{
    int a=-1;
    if (isEmpty(q))
    {
        printf("The queue is empty\n");
    }
    else
    {
        q->f++;
        a=q->arr[q->f];
    }
    printf("Dequeuing element at %d is %d\n", q->f,a);
}

int R_dequeue(struct queue*q)
{
    int a=-1;
    if (isEmpty(q))
    {
        printf("The queue is empty\n");
    }
    else
    {
        a=q->arr[q->r];
        printf("Dequeuing element at %d is %d\n", q->r,a);
        q->r--;
    }
}

int main()
{
    struct queue *q;
    q->arr=(int*)malloc(q->size*sizeof(int));
    q->size=5;
    q->r=q->f=-1;

    R_enqueue(q,10);
    R_enqueue(q,20);
    R_enqueue(q,30);
    R_enqueue(q,40);
    R_enqueue(q,50);


    printf("\n");

    F_dequeue(q);
    F_dequeue(q);
    F_dequeue(q);

    printf("\n");
//*************************************

    F_enqueue(q,40);
    F_enqueue(q,50);



    printf("\n");

    R_dequeue(q);
    R_dequeue(q);

  

    return 0;
}