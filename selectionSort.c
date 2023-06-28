#include <stdio.h>

void selectionSort(int arr[], int n);

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    selectionSort(arr, n);

    printf("The Sorted Array is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%3d", arr[i]);
    }

    return 0;
}

void selectionSort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}