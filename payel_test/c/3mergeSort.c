#include <stdio.h>
#include <stdlib.h>

// Function to merge two halves of the array
void merge(int arr[], int low, int mid, int high)
{
    int *temp = (int *)malloc((high - low + 1) * sizeof(int)); // temporary array
    int left = low;                                            // starting index of left half of arr
    int right = mid + 1;                                       // starting index of right half of arr
    int k = 0;                                                 // index for temporary array

    // Storing elements in the temporary array in a sorted manner
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp[k++] = arr[left++];
        }
        else
        {
            temp[k++] = arr[right++];
        }
    }

    // If elements on the left half are still left
    while (left <= mid)
    {
        temp[k++] = arr[left++];
    }

    // If elements on the right half are still left
    while (right <= high)
    {
        temp[k++] = arr[right++];
    }

    // Transferring all elements from temporary array to original array
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }

    free(temp); // Free the allocated memory
}

// Function to perform merge sort
void mergeSort(int arr[], int low, int high)
{
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);      // left half
    mergeSort(arr, mid + 1, high); // right half
    merge(arr, low, mid, high);    // merging sorted halves
}

int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Before Sorting Array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    mergeSort(arr, 0, n - 1);

    printf("After Sorting Array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr); // Free the allocated memory
    return 0;
}
