#include <stdio.h>

int main(){
    int score;
    printf("Please insert your score!\n");
        scanf("%d", &score);

    if (score >= 0 && score <= 100){
        if (score >= 40){
        printf("You passed!");
        }
        else{
        printf("You failed!");
        }
    }
    else{
        printf("Please input a score between 1 to 100!");
    }
    
}