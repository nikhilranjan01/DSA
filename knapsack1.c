#include <stdio.h>

// Function to perform Bubble Sort on items based on value-to-weight ratio
void bubbleSort(int n, double ratio[], int weights[], int profits[]) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (ratio[j] < ratio[j + 1]) {
                // Swap value-to-weight ratios
                double tempRatio = ratio[j];
                ratio[j] = ratio[j + 1];
                ratio[j + 1] = tempRatio;

                // Swap weights
                int tempWeight = weights[j];
                weights[j] = weights[j + 1];
                weights[j + 1] = tempWeight;

                // Swap profits
                int tempProfit = profits[j];
                profits[j] = profits[j + 1];
                profits[j + 1] = tempProfit;
            }
        }
    }
}

// Function to solve the fractional knapsack problem using a greedy approach
void knapsackGreedy(int n, int weights[], int profits[], int capacity) {
    double ratio[n];

    // Calculate the value-to-weight ratio for each item
    for (int i = 0; i < n; i++) {
        ratio[i] = (double)profits[i] / weights[i];
    }

    // Sort items based on their value-to-weight ratio using Bubble Sort
    bubbleSort(n, ratio, weights, profits);

    int currentWeight = 0;
    double finalValue = 0.0;

    // Iterate through sorted items
    for (int i = 0; i < n; i++) {
        // If adding the entire item won't exceed the capacity, add it
        if (currentWeight + weights[i] <= capacity) {
            currentWeight += weights[i];
            finalValue += profits[i];
        } else {
            // If adding the entire item would exceed the capacity, add a fraction
            int remainingWeight = capacity - currentWeight;
            finalValue += ratio[i] * remainingWeight;
            break;
        }
    }

    printf("Maximum value in Knapsack = %.2lf\n", finalValue);
}

int main() {
    int profits[] = {6, 10, 18, 15, 3, 5, 7};
    int weights[] = {1, 2, 4, 5, 1, 3, 7};
    int n = sizeof(profits) / sizeof(profits[0]);

    // Input the capacity of the knapsack
    int capacity = 15;

    // Solve the Knapsack problem using the greedy approach
    knapsackGreedy(n, weights, profits, capacity);

    return 0;
}
