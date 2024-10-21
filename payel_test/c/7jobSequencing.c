#include <stdio.h>
#include <stdlib.h>

typedef struct Job
{
    int id;     // Job Id
    int dead;   // Deadline of job
    int profit; // Profit if job is done before or on deadline
} Job;

int comparison(const void *a, const void *b)
{
    return ((Job *)b)->profit - ((Job *)a)->profit;
}

// Function to find the maximum profit and the number of jobs done
void JobScheduling(Job arr[], int n, int *countJobs, int *jobProfit)
{
    // Sorting jobs according to decreasing order of profit
    qsort(arr, n, sizeof(Job), comparison);

    // Finding the maximum deadline
    int maxi = arr[0].dead;
    for (int i = 1; i < n; i++)
    {
        if (arr[i].dead > maxi)
        {
            maxi = arr[i].dead;
        }
    }

    // Array to keep track of free time slots
    int slot[maxi + 1];
    for (int i = 0; i <= maxi; i++)
    {
        slot[i] = -1;
    }

    // Initialize count of jobs and total profit
    *countJobs = 0;
    *jobProfit = 0;

    // Iterate through all given jobs
    for (int i = 0; i < n; i++)
    {
        // Find a free slot for this job (Note that we start from the last possible slot)
        for (int j = arr[i].dead; j > 0; j--)
        {
            // Free slot found
            if (slot[j] == -1)
            {
                slot[j] = i;
                (*countJobs)++;
                *jobProfit += arr[i].profit;
                break;
            }
        }
    }
}

int main()
{
    int n;
    printf("Enter the number of jobs: ");
    scanf("%d", &n);

    Job arr[n];
    printf("Enter job details (ID, deadline, profit) for each job:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Job %d: ", i + 1);
        scanf("%d %d %d", &arr[i].id, &arr[i].dead, &arr[i].profit);
    }

    int countJobs, jobProfit;
    JobScheduling(arr, n, &countJobs, &jobProfit);

    printf("Number of jobs done: %d\n", countJobs);
    printf("Total profit: %d\n", jobProfit);

    return 0;
}
