/* NT01012 Procedural Programming	     */
/* Programming Assignment 3	     */
/*						     */
/* Question Number:	1		     */
/* Name: Daniello Jokhenka				     */
/* Date: 28 November 2024				     */

#include <stdio.h>
#include <math.h>
#include <ctype.h>

float absolute(float y){
     if (y < 0){
        y = -y;
     }
     else{
        y = y;
     }
     return y;
}

float squareroot(float x){
    float guess = 1;
    float e = 0.001;

    //Raphson Method
    while(!(absolute(pow(guess, 2) - x) < e)){
        guess = (x/guess + guess)/2;
    }

    return guess;
}

int main(){
    float input;
    float answer;
    
    //get input from user
    printf("Please input a POSITIVE number to find the square root of: ");
   
    //conditional to check if number is positive and not a character
    if (scanf("%f", &input) == 1 && input > 0){
        answer = squareroot(input);
        
        printf("%.2f", answer);
    }
    else if (input < 0){
        printf("Error! Please input a POSITIVE number");
    }
    else{
        printf("Error! Please input a NUMBER, not a character!");      
    }

}