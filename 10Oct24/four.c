#include <stdio.h>
#include <ctype.h>

int main(){
    char answer;
            
    do{
        printf("Do you want to continue?");
        scanf(" %c", &answer);
        answer = tolower(answer);
        if (answer != 'y' && answer != 'n'){
            printf("Response not recognized\n");
        }
    }
    while (answer != 'y' && answer != 'n');
    {
        if (answer == 'y'){
            printf("Thank you, continuing the program....");
        }
        else{
            printf("Goodbye...");
        }
    }

}