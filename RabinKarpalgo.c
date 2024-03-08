#include <stdio.h>
#include <string.h>
#include <math.h>

#define PRIME 11

// Function to calculate hash value
int calculate_hash(int arr[], int start, int end) {
    int hash = 0;
    for (int i = start; i <= end; i++) {
        hash = (hash * 10 + arr[i]) % PRIME;
    }
    return hash;
}

// Function to implement Rabin-Karp algorithm
void search(int text[], int pattern[], int txt_len, int pat_len) {
    int pat_hash = calculate_hash(pattern, 0, pat_len - 1);
    int txt_hash = calculate_hash(text, 0, pat_len - 1);

    for (int i = 0; i <= txt_len - pat_len; i++) {
        if (pat_hash == txt_hash) {
            int j;
            for (j = 0; j < pat_len; j++) {
                if (text[i + j] != pattern[j])
                    break;
            }
            if (j == pat_len) {
                printf("Pattern found at index %d\n", i);
            }
        }
        if (i < txt_len - pat_len) {
            txt_hash = (10 * (txt_hash - text[i] * (int)pow(10, pat_len - 1)) + text[i + pat_len]) % PRIME;
            if (txt_hash < 0) // To handle negative values
                txt_hash += PRIME;
        }
    }
}

int main() {
    int text[] = {3, 1, 4, 1, 4, 5, 9, 2, 6, 5, 3, 5};
    int pattern[] = {1,4};
    int txt_len = sizeof(text) / sizeof(text[0]);
    int pat_len = sizeof(pattern) / sizeof(pattern[0]);

    search(text, pattern, txt_len, pat_len);

    return 0;
}
