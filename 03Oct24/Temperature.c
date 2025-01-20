#include <stdio.h>

int main(){
    float temp;
    char conv;
    float answer;

    printf("Please select temperature to convert to (F or C)!");
    scanf("%c", &conv);

    printf("Please input the temperature: ");
    scanf(" %f", &temp);
    

    if (conv == 'F' || conv == 'f'){
        answer = temp * 9/5 + 32;
        printf("The converted temperature to Farenheit is: %.1f", answer);
    }
    else if (conv == 'c' || conv == 'C'){
        answer = (temp - 32) * 5/9;
        printf("The converted temperature to Celcius is: %.1f", answer);
    }
    else{
        printf("Please input a correct temperature scale!");
    }
    
}