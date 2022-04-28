#include <stdio.h>

int binarySearch(int arr[], int low, int high, int key)
{

    while(high >= low)
    {
        int mid = high + low / 2;

        if (arr[mid] == key)
            return mid;

        if (arr[mid] < key)
        {
            low = mid + 1;
        }
        if (arr[mid] > key)
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int array[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int key = 0;
    int size = sizeof(array) / sizeof(array[0]);

    printf("Enter search element : ");
    scanf("%d", &key);

    int index = binarySearch(array, 0, size, key);

    if (index == -1)
        printf("Not found\n");
    else
        printf("Index is %d\n", index);
}
