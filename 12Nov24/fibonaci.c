#include <stdio.h>

int main(){
    int fib_numbers[40] = {0,1};
    int i, j;

    for (i=2; i<40; i++){
        fib_numbers[i] = fib_numbers[i-2] + fib_numbers[i-1];
    }

    for (j=0; j<40; j++){
        printf("%d\n", fib_numbers[j]);
    }
}