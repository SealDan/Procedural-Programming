/* NT01012 Procedural Programming*/
/* Programming Assignment 4	     */
/*						         */
/* Question Number:	1		     */
/* Name: Daniello Jokhenka	     */
/* Date: 9 December 2024	     */

#include <stdio.h>
#include <math.h>

float sumof(float x[10]){
    float y;
    int i;
    for (i = 0; i<10; i++){
        y += x[i];
    }
    return y;
}

int main(){
    float x[10] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90};
    float y[10] = {0.3, 1.2, 2.4, 2.9, 4.3, 5.8, 6.1, 6.9, 8.6, 9.2};
    float xy[10];
    float x2[10];

    float x_sum = 0;
    float y_sum = 0;
    float xy_sum = 0;
    float x2_sum = 0;

    float slope = 0;

    float intercept = 0; 

    float sensor_resistance = 0;
    float user_load = 0;

    printf("Please input a load weight: ");

    if (scanf("%f", &user_load) == 1){
       // calculate x^2 and xy
        for(int i=0; i<10; i++){
            xy[i] = x[i]*y[i];
            x2[i] = x[i]*x[i];
        }

        //calculate sum of all
        // for(int j=0; j<10; j++){
        //     x_sum = x_sum + x[j];
        //     y_sum = y_sum + y[j];
        //     x2_sum = x2_sum + x2[j];
        //     xy_sum = xy_sum + xy[j];
        // }

        x_sum = sumof(x);
        y_sum = sumof(y);
        x2_sum = sumof(x2);
        xy_sum = sumof(xy);

        //calculating slope m
        slope = (10*xy_sum - x_sum*y_sum)/(10*x2_sum - pow(x_sum, 2));

        //calculating the c intercept
        intercept = (y_sum - slope*x_sum)/10;

        // equation for finding sensor resistance
        sensor_resistance = slope*user_load + intercept;

        printf("With the load weight of %.2f Kg, estimation of the sensor resistance will be %.3f", user_load, sensor_resistance);
    }
    else{
        printf("Error! Please input a NUMBER, not a character!");      
    }

}