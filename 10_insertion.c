#include <stdio.h>

void display(int arr[], int n)
{
    //travers
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}

int insertion(int arr[], int size, int element, int capacity, int index)
{
    if (size >= capacity)
    {
        printf("Arry has more size than its capticity element will not insert\n");
        return -1;
    }else{
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    printf("sucess in element insertion\n");

    return 1;
    }
}

int main()
{
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5, element = 45, index = 3;

    display(arr, size);
    insertion(arr, size, element, 100, index);
    size++;
    display(arr, size);

    return 0;
}