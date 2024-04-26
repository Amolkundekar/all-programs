#include <iostream>
#include <cstring>

using namespace std;

// Function to find the maximum of two integers
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Function to solve the 0/1 knapsack problem
int knapsack(int W, int wt[], int val[], int n) {
    // Create a table to store the maximum value that can be obtained for each subproblem
    int K[n + 1][W + 1];
    memset(K, 0, sizeof(K));

    // Fill the table in bottom-up manner
    for (int i = 1; i <= n; i++) {
        for (int w = 1; w <= W; w++) {
            // If the weight of the current item is more than the maximum capacity of the knapsack,
            // then this item cannot be included in the optimal solution
            if (wt[i - 1] > w) {
                K[i][w] = K[i - 1][w];
            } else {
                // Otherwise, find the maximum value that can be obtained by either including or excluding the current item
                K[i][w] = max(val[i - 1] + K[i - 1][w - wt[i - 1]], K[i - 1][w]);
            }
        }
    }

    // Return the maximum value that can be obtained
    return K[n][W];
}

int main() {
    int n, W;
    cout << "Enter the number of items: ";
    cin >> n;
    int wt[n], val[n];
    cout << "Enter the weight and value of each item:\n";
    for (int i = 0; i < n; i++) {
        cin >> wt[i] >> val[i];
    }
    cout << "Enter the capacity of the knapsack: ";
    cin >> W;
    int maxVal = knapsack(W, wt, val, n);
    cout << "Maximum value that can be obtained: " << maxVal << endl;
    return 0;
}

