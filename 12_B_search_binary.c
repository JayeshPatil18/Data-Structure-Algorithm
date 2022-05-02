#include <stdio.h>

int binarySearch(int arr[], int size, int element)
{
    int low = 0, mid, high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {2, 4, 5, 6, 8, 9};
    int size = sizeof(arr) / sizeof(int);
    int element = 4;
    int searchIndex = binarySearch(arr, size, element);
    printf("The element : %d is found in an arry at index : %d \n", element, searchIndex);
    return 0;
}