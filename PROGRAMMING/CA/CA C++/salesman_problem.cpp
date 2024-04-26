#include <iostream>
#include <cstring>
#include <algorithm>
#include <limits.h>

using namespace std;

const int MAXN = 20; // Maximum number of cities

int n;                   // Number of cities
int dist[MAXN][MAXN];    // Distance matrix
int dp[1 << MAXN][MAXN]; // Memoization table

// Function to solve the traveling salesman problem using dynamic programming
int tsp(int mask, int pos)
{
    if (mask == (1 << n) - 1)
    {                        // If all cities have been visited
        return dist[pos][0]; // Return the distance from the last city to the starting city
    }
    if (dp[mask][pos] != -1)
    {                         // If the subproblem has already been solved
        return dp[mask][pos]; // Return the memoized value
    }
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if ((mask & (1 << i)) == 0)
        {                                             // If the i-th city has not been visited
            int newMask = mask | (1 << i);            // Set the i-th bit in the mask to 1
            int tmp = dist[pos][i] + tsp(newMask, i); // Compute the cost of visiting the i-th city
            ans = min(ans, tmp);                      // Update the minimum cost
        }
    }
    return dp[mask][pos] = ans; // Memoize the result and return it
}

int main()
{
    cout << "Enter the number of cities: ";
    cin >> n;
    cout << "Enter the distances between each pair of cities:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> dist[i][j];
        }
    }
    memset(dp, -1, sizeof(dp)); // Initialize the memoization table to -1
    int minCost = tsp(1, 0);    // Call the tsp function to compute the minimum cost
    cout << "The minimum cost of the TSP tour is: " << minCost << endl;
    return 0;
}
