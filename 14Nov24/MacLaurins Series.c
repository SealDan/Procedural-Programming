#include <stdio.h>
#include <math.h>

int main(){
    int x_term;
    int n_terms;
    int i, j;
    float sum = 0;
    int factorial;

    printf("Enter a value of x to evaluate exp(x) :");
    scanf("%d", &x_term);

    printf("Enter number of terms of Maclaurins series :");
    scanf( "%d", &n_terms);

    for (i=0; i < n_terms; i++){
        factorial = 1;
        for (j=1; j<=i; j++){
            factorial = factorial * j;
        }
        sum = sum + (pow(x_term, i)/factorial);

        printf("With %d terms, exp(%d) series = %f\n", i + 1, x_term, sum);
    }
    
}