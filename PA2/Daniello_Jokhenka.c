#include <stdio.h>
#include <math.h>

int main(){
    float x_value;
    int term;
    int i;
    float sum = 0;

    // requesting value of x
    printf("Please input a value of x (-1 > x > 1): ");
    scanf(" %f", &x_value);

    // requesting number of terms
    printf("Please input a number of terms for the Maclauring series: ");
    scanf(" %d", &term);

    // check if value of x is between 1 and -1
    if (x_value > -1 && x_value < 1){
        // maclauring series function with for loop
        for (i=1; i<=term; i++){
            sum = sum + pow(-1, i+1)*(pow(x_value, i)/i);\
            
            printf("Term number %d of the Maclauring series for value x of %.2f is %f\n", i, x_value, sum);
        }
    }
    else{
        printf("Error! Please input a value of x less than 1 and greater than -1!");
    }

    

    
}