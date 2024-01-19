//Make a progaram kanpsack probleam using greedy approach which is user defind in c
#include <stdio.h>
#include <stdlib.h>

// Structure to represent items
struct Item {
    int profit;
    int weight;
};

// Function to compare items based on their profit per unit weight
int compareItems(const void *a, const void *b) {
    double ratioA = ((struct Item *)a)->profit / (double)((struct Item *)a)->weight;
    double ratioB = ((struct Item *)b)->profit / (double)((struct Item *)b)->weight;
    return (ratioB > ratioA) - (ratioB < ratioA);
}

// Function to solve the fractional knapsack problem using a greedy approach
double knapsackGreedy(struct Item items[], int n, int capacity) {
    // Sort items based on their profit-to-weight ratio in descending order
    qsort(items, n, sizeof(items[0]), compareItems);

    int currentWeight = 0;
    double finalProfit = 0.0;

    // Iterate through sorted items
    for (int i = 0; i < n; i++) {
        // If adding the entire item won't exceed the capacity, add it
        if (currentWeight + items[i].weight <= capacity) {
            currentWeight += items[i].weight;
            finalProfit += items[i].profit;
        } else {
            // If adding the entire item would exceed the capacity, add a fraction
            int remainingWeight = capacity - currentWeight;
            finalProfit += items[i].profit * (remainingWeight / (double)items[i].weight);
            break;
        }
    }

    return finalProfit;
}

int main() {
    // Given profits and weights for each item
    int profits[] = {6, 10, 18, 15, 3, 5, 7};
    int weights[] = {1, 2, 4, 5, 1, 3, 7};
    int n = sizeof(profits) / sizeof(profits[0]);

    // Create an array of Item structures
    struct Item items[n];
    for (int i = 0; i < n; i++) {
        items[i].profit = profits[i];
        items[i].weight = weights[i];
    }

    // Given capacity of the knapsack
    int capacity = 15;

    // Solve the Knapsack problem using the greedy approach
    double maxProfit = knapsackGreedy(items, n, capacity);

    printf("Maximum profit in Knapsack = %.2lf\n", maxProfit);

    return 0;
}
