#include<stdio.h>

int linearSearch(int arr[], int size, int element)
{
    for(int i =0; i<size; i++)
    {
        if(arr[i]==element)
        {
            return 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {12,35,4,24,2,5353,535,56,63};
    int size = sizeof(arr)/sizeof(int);
    int element = 4;
    int searchIndex = linearSearch(arr,size,element);
    printf("The %d is found in an arry at index %d\n",element,searchIndex);

    return 0;
}