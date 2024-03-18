#include<stdio.h>
#include<limits.h>

void printParenthesis(int i, int j, int n, int *s, char name) {
    if (i == j) {
        printf("%c%d", name, i);
    } else {
        printf("(");
        printParenthesis(i, *((s+i*n)+j), n, s, name);
        printParenthesis(*((s+i*n)+j) + 1, j, n, s, name);
        printf(")");
    }
}

void matrixChainOrder(int p[], int n) {
     int m[n][n];
      int s[n][n]; 
    int i, j, k, L, q;

    for (i = 1; i < n; i++)
        m[i][i] = 0;

//need
        for (L = 2; L < n; L++) {
        for (i = 1; i < n-L+1; i++) {
            j = i + L - 1;
            m[i][j] = INT_MAX;
            for (k = i; k <= j-1; k++) {
                q = m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j];
                if (q < m[i][j]) {
                    m[i][j] = q;
                    s[i][j] = k; // Store split index
                }
            }
        }
    }

     printf("Minimum number of multiplications needed: %d\n", m[1][n-1]);

    printf("Optimal parenthesization: ");
    
    printParenthesis(1, n-1, n, (int *)s, 'A');
    printf("\n");

}

int main() {
    int p[] = {5, 4, 6, 2, 7}; // Dimensions of matrices
    int n = sizeof(p)/sizeof(p[0]); // Number of matrices

    matrixChainOrder(p, n);

    return 0;
}