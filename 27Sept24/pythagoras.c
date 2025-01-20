#include <stdio.h>
#include <math.h>

int main(){
    int a = 0;
    int b = 0;

    scanf("%d", &a);
    scanf("%d", &b);

    float answer = sqrt(pow(a, 2) + pow(b,2));

    printf("The answer is: %f", answer);
}
