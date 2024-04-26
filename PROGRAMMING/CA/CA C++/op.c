#include <stdio.h>
#include <stdlib.h>

// Function to find minimum computation
int minComputation(int size, int files[])
{
    // Create a min heap
    int i;
    int *pq = (int *)malloc(sizeof(int) * size);

    for (i = 0; i < size; i++)
    {
        // Add sizes to priorityQueue
        pq[i] = files[i];
    }

    // Variable to count total Computation
    int count = 0;

    while (size > 1)
    {
        // Find index of two smallest size elements
        int first_smallest = 0, second_smallest = 1;
        if (pq[first_smallest] > pq[second_smallest])
        {
            int temp = first_smallest;
            first_smallest = second_smallest;
            second_smallest = temp;
        }

        for (i = 2; i < size; i++)
        {
            if (pq[i] < pq[first_smallest])
            {
                second_smallest = first_smallest;
                first_smallest = i;
            }
            else if (pq[i] < pq[second_smallest])
            {
                second_smallest = i;
            }
        }

        int temp = pq[first_smallest] + pq[second_smallest];

        // Add the current computations
        // with the previous one's
        count += temp;

        // Replace the two smallest elements
        // with the new combined file size
        pq[first_smallest] = temp;
        pq[second_smallest] = pq[size - 1];
        size--;
    }

    free(pq);
    return count;
}

// Driver code
int main()
{
    // No of files
    int n = 6;

    // 6 files with their sizes
    int files[] = {2, 3, 4, 5, 6, 7};

    // Total no of computations to be done
    // Print the final answer
    printf("Minimum Computations = %d\n", minComputation(n, files));

    return 0;
}