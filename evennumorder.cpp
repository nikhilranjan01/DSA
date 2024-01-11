#include <stdio.h>

int main() {
    int evenNumbers[10];
    int evenCount = 0;

    printf("Enter 10 even numbers:\n");

    while (evenCount < 10) {
        int num;
        scanf("%d", &num);

        if (num % 2 == 0) {
            evenNumbers[evenCount] = num;
            evenCount++;
        } else {
            printf("Please enter an even number.\n");
        }
    }
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (evenNumbers[j] > evenNumbers[j + 1]) {
                int temp = evenNumbers[j];
                evenNumbers[j] = evenNumbers[j + 1];
                evenNumbers[j + 1] = temp;
            }
        }
    }
    printf("Sorted even numbers in ascending order: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", evenNumbers[i]);
    } 
    return 0;
}
 