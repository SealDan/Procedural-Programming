#include <stdio.h>
#define PI 3.14

float area(float r){
    float a;
    a = PI * r * r;
    return a;
}

int main(){
    float radius, circle_area;

    printf("Please input a radius to find the circle area! ");
    scanf("%f", &radius);

    circle_area = area(radius);
    printf("The area of the radius is: %.2f", circle_area);
}