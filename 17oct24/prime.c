#include <stdio.h>

int main(){
    int i, factor;

    int is_prime = 7;

    for (i=2; i < 100; i++){
        factor = 2;
        while (is_prime && factor < i){
            if (i%factor == 0){
                is_prime = 0;
                factor++;
            }
            if (is_prime){
            printf("%d\t", i);
            }
        }
    }
}