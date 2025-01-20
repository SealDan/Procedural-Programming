#include <stdio.h>

int main(){
    int amount;
    char pcode;
    int total;
    int disctotal;
    

    printf("Here is a list of our products!\n W: $12.45 \n X: $2.36 \n Y: $6.50 \n Z: $16.40\n");
    printf("Please input product code (W/X/Y/Z) : ");
    scanf("%c", &pcode);

    switch (pcode)
    {
        case 'W':
        case 'w':
        printf("Please input total amount of product to buy: ");
        scanf("%d", &amount);

        total = 12.45 * amount;
        if (amount <= 10){
            printf("You don't get a discount! Your total will become: $%d", total);
        }
        else if (amount <= 49){
            disctotal = total * 98/100;
            printf("You get a 2 percent discount! Your total from $%d will become: $%d", total, disctotal);
        }
        else if (amount <= 99){
            disctotal = total * 95/100;
            printf("You get a 5 percent discount! Your total from $%d will become: $%d", total, disctotal);
        }
        else if (amount >= 100){
            disctotal = total * 92.5/100;
            printf("You get a 7.5 percent discount! Your total from $%d will become: $%d", total, disctotal);
        }
        break;

        case 'X':
        case 'x':
        printf("Please input total amount of product to buy!");
        scanf("%d", &amount);

        total = 2.36 * amount;
        if (amount <= 10){
            printf("You don't get a discount! Your total will become: $%d", total);
        }
        else if (amount <= 49){
            disctotal = total * 99.05/100;
            printf("You get a 0.5 percent discount! Your total from $%d will become: $%d", total, disctotal);
        }
        else if (amount <= 99){
            disctotal = total * 98/100;
            printf("You get a 2 percent discount! Your total from $%d will become: $%d", total, disctotal);
        }
        else if (amount >= 100){
            disctotal = total * 96/100;
            printf("You get a 4 percent discount! Your total from $%d will become: $%d", total, disctotal);
        }
        break;

        case 'Y':
        case 'y':
        printf("Please input total amount of product to buy!");
        scanf("%d", &amount);

        total = 6.50 * amount;
        if (amount <= 10){
            printf("You don't get a discount! Your total will become: $%d", total);
        }
        else if (amount <= 49){
            disctotal = total * 99/100;
            printf("You get a 1 percent discount! Your total from $%d will become: $%d", total, disctotal);
        }
        else if (amount <= 99){
            disctotal = total * 97.5/100;
            printf("You get a 2.5 percent discount! Your total from $%d will become: $%d", total, disctotal);
        }
        else if (amount >= 100){
            disctotal = total * 95/100;
            printf("You get a 5 percent discount! Your total from $%d will become: $%d", total, disctotal);
        }
        break;

        case 'Z':
        case 'z':
        printf("Please input total amount of product to buy!");
        scanf("%d", &amount);

        total = 16.40 * amount;
        if (amount <= 10){
            printf("You don't get a discount! Your total will become: $%d", total);
        }
        else if (amount <= 49){
            disctotal = total * 90/100;
            printf("You get a 10 percent discount! Your total from $%d will become: $%d", total, disctotal);
        }
        else if (amount <= 99){
            disctotal = total * 87.5/100;
            printf("You get a 12.5 percent discount! Your total from $%d will become: $%d", total, disctotal);
        }
        else if (amount >= 100){
            disctotal = total * 85/100;
            printf("You get a 15 percent discount! Your total from $%d will become: $%d", total, disctotal);
        }
        break;
    
    default:
        printf("Please select an available product code!");
        break;
    }
}