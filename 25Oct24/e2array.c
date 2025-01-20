#include <stdio.h>

int main(){
    int temperature_readings[7][24];
    int r;
    int c;

    for (r=0; r<7; r++){
        for (c=0; c<24; c++){
            printf("%d\t", temperature_readings[r][c]);
        }
        printf("\n");
    }
}