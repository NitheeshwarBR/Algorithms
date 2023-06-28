//Selection Sort algorithms
//Input : An unsorted array(a[0......n])
//output :  An Sorted array ( in ascending order) (a[0.....n])
//
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

    selectionSort(arr, n);// Call the selection sort function

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
        int min = i; // Assume the current element as the minimum
        // Find the minimum element in the unsorted part of the array
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;// Update the index of the minimum element
            }
        }
        // Swap the current element with the minimum element
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}