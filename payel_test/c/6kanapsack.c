#include <stdio.h>
#include <stdlib.h>

int max(int a, int b)
{
    return (a > b) ? a : b;
}

// Function to solve the 0/1 Knapsack problem using memoization
int knapsackUtil(int wt[], int val[], int ind, int W, int dp[][W + 1])
{
    // Base case: If there are no items left or the knapsack has no capacity, return 0
    if (ind == 0 || W == 0)
    {
        return 0;
    }

    // If the result for this state is already calculated, return it
    if (dp[ind][W] != -1)
    {
        return dp[ind][W];
    }

    // Calculate the maximum value by either excluding the current item or including it
    int notTaken = knapsackUtil(wt, val, ind - 1, W, dp);
    int taken = 0;

    // Check if the current item can be included without exceeding the knapsack's capacity
    if (wt[ind] <= W)
    {
        taken = val[ind] + knapsackUtil(wt, val, ind - 1, W - wt[ind], dp);
    }

    // Store the result in the DP table and return
    dp[ind][W] = max(notTaken, taken);
    return dp[ind][W];
}

// Function to solve the 0/1 Knapsack problem
int knapsack(int wt[], int val[], int n, int W)
{
    int dp[n][W + 1];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            dp[i][j] = -1;
        }
    }
    return knapsackUtil(wt, val, n - 1, W, dp);
}

int main()
{
    int n, W;
    printf("Enter the number of items: ");
    scanf("%d", &n);

    int wt[n], val[n];
    printf("Enter the weights of the items: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &wt[i]);
    }

    printf("Enter the values of the items: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &val[i]);
    }

    printf("Enter the capacity of the knapsack: ");
    scanf("%d", &W);

    printf("The Maximum value of items the thief can steal is %d\n", knapsack(wt, val, n, W));

    return 0;
}
