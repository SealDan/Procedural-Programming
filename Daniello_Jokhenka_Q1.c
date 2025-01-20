/* NT01012 Procedural Programming*/
/* Programming Assignment 1	     */
/*						         */
/* Question Number: 1		     */
/* Name: Daniello Jokhenka	     */
/* Date: 24 Oct 2024		     */

#include <stdio.h>

int main(){
    float value; //input value to be converted
    char conversion; //input to know which conversion to be done through conditional
    float result; 

    printf("Input a value of pressure to be converted: ");
    scanf("%f", &value); //get user input value

    printf("Input conversion to be performed (P: bar to PSI || B: PSI to bar): ");
    scanf(" %c", &conversion); //get user conversion

    if (conversion == 'p' || conversion == 'P'){ //conditional to check character for lowercase or highercase
        result = value*14.5; //formula for bar to PSI
        printf("Your converted value from bar to PSI is %.2f", result); 
    }
    else if (conversion == 'b' || conversion == 'B'){ //conditional to check character for lowercase or highercase
        result = value/14.5; //formula for PSI to bar
        printf("Your converted value from PSI to bar is %.2f", result);
    }
    else{
        printf("Error! Please input a valid conversion!"); // else statement for invalid character entered
    }
}
