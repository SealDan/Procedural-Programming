#include <stdio.h>
#include <math.h>

int main() {
    int x;
    int n_terms;
    int i, j;
    float sum = 0;  // Initialize sum
    int factorial;

    printf("Enter a value of x to evaluate exp(x) : ");
    scanf("%d", &x);

    printf("Enter number of terms of Maclaurin's series : ");
    scanf("%d", &n_terms);

    for (i = 0; i < n_terms; i++) {
        factorial = 1;  // Reset factorial for each term
        for (j = 1; j <= i; j++) {
            factorial *= j;
        }
        sum += pow(x, i) / factorial;

        printf("With %d terms, exp(%d) series = %f\n", i + 1, x, sum);
    }

    return 0;
}
