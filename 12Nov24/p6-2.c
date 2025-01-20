#include <stdio.h>

int main(){
    int vector_size;

    int x[vector_size];
    int y[vector_size];

    int scalar_product = 0;
    int scalar_sum;
    int i, j;

    //choose size of vector
    printf("Enter the vector length: ");
    scanf("%d", &vector_size);


    if (vector_size <= 100){
        //enter first and second vector
        printf("Enter First Vector: ");
        for (i=0; i<vector_size; i++){
            scanf("%d", &x[i]);
        }

        printf("Enter Second Vector: ");
        for (i=0; i<vector_size; i++){
            scanf("%d", &y[i]);
        }

        for (i=0; i<vector_size; i++){
            for (j=0; j<vector_size; j++){
                scalar_sum = 0;
                scalar_sum = x[j]*y[j];
            }
            scalar_product = scalar_product + scalar_sum;
        }

        printf("The scalar product is %d", scalar_product);
    }
    else{
        printf("Size of vector too large! Choose a vector size less than 100!");
    }


    //Result
}