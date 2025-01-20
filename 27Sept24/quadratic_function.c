#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, x1, x2;

    printf("Please provide 3 numbers!");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    x1 = (-b + sqrt(pow(b,2) - 4 * a * c))/2*a;
    x2 = (-b - sqrt(pow(b,2) - 4 * a * c))/2*a;

    printf("Your X1 is: %f\nYour X2 is: %f", x1,x2);
}
