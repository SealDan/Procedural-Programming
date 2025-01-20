#include <stdio.h>
#include <string.h>

int main(){
    char sentance[100];
    int i;

    printf("Enter a message: ");
    scanf("%c", &sentance);

    int length = strlen(sentance);

    printf("%d", length);

    for (i = length; i>0; i--){
        printf("%c", sentance[i]);
    }
}