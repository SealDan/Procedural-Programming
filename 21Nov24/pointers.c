#include <stdio.h>


int main(){
    int arr[5] = {3, 5, 9, 21, 1000};

    int *pntr = arr;

    *pntr = 50;
    *(pntr+2) += 9; 
    
    printf("%d\n", *pntr);
    printf("%d\n", *(pntr+2));
    printf("%d\n", *(pntr+4));
    printf("%d\n", *(pntr+2)/3);
    printf("%d\n", *(pntr+4)/5);
    printf("%d\n", *pntr+27);
}