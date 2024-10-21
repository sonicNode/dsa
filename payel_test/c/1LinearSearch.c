#include <stdio.h>

int linearSearch(int arr[], int key, int n)
{
    for (int i = 0; i < n; i++)
        if (arr[i] == key)
            return i;
    return -1;
}
int main()
{
    int n, key;
    printf("Enter the size of the array: \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elemenst of the array one by one: \n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the value to be searched: \n");
    scanf("%d", &key);
    // int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};  ///////for predefined inputs
    // int n = sizeof(arr) / sizeof(arr[0]);
    // int x = 2;                 //////////////////////x is the value to be searched;
    int ans = linearSearch(arr, key, n);
    if (ans == -1)
        printf("The element is not found in the array: :(");
    else
        printf("The element is present in %d index.\n", ans);
    return 0;
}