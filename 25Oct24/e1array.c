#include <stdio.h>

int main(){
    int number[5] = {1, 10, 3, 5, 7};
    int i;

    for (i=0; i<5; i+=2){
        printf("%d\n", number[i]);
    }
}