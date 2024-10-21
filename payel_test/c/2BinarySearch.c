#include <stdio.h>

int binarySearch(int arr[], int n, int x)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] > x)
            high = mid - 1;
        else if (arr[mid] < x)
            low = mid + 1;
    }
    return -1;
}

int main()
{
    printf("Enter the size of the array: \n");
    int n, x;
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array one by one: \n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the element to be searched: \n");
    scanf("%d", &x);
    // int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};  ///////for predefined inputs
    // int n = sizeof(arr) / sizeof(arr[0]);
    // int x = 2;                 //////////////////////x is the value to be searched;
    int ans = binarySearch(arr, n, x);
    if (ans == -1)
        printf("The element is not found in the array: :(");
    else
        printf("The element is present in %d index.\n", ans);
    return 0;
}
