#include <stdio.h>

float prime(int x){
    if (x<=1){
        return 0;
    }
    
    for (int i = 2; i <= x; i++){
        if (x%i == 0 && i != x){
            return 0;
        }
    }
    return 1;
}

int main(){
    int number;
    printf("Please enter a positive number: ");
    scanf("%d", &number);

    if (prime(number) == 1){
        printf("The number %d is a prime number!", number);
    }
    else{
        printf("The number %d is not a prime number!", number);
    }
}