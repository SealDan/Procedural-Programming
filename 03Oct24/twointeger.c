#include <stdio.h>

int main(){
    int num1;
    int num2;
    printf("Which of the following conditions apply!\nA. Both numbers are even\nB. Both numbers are odd\nC. One number is even and the other number is odd\n");
    scanf("%d", &num1);
    scanf(" %d", &num2);

    if (num1 % 2 == 0 && num2 % 2 == 0 ){
        printf("The first condition (Condition A) is correct! Both numbers are even!");
    }
    else if (num1 % 2 != 0 && num2 % 2 != 0){
        printf("The second condition (Condition B) is correct! Both numbers are odd!");
    }
    else{
        printf("The third condition (Condition C) is correct! One number is even and the other is odd!");
    }
}