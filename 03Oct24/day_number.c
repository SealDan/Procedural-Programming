#include <stdio.h>
#include <string.h>

int main(){
    char day[4];  
    
    printf("Enter a day (Mon/Tue/Wed/Thu/Fri/Sat/Sun) : ");
    scanf("%s", day);

    if (strcmp(day, "Mon") == 0 || strcmp(day, "mon") == 0){
        printf("The day number is : 1\n");
    }
    else if (strcmp(day, "Tue") == 0 || strcmp(day, "tue") == 0){
        printf("The day number is : 2\n");
    }
    else if (strcmp(day, "Wed") == 0 || strcmp(day, "wed") == 0){
        printf("The day number is : 3\n");
    }
    else if (strcmp(day, "Thu") == 0 || strcmp(day, "thu") == 0){
        printf("The day number is : 4\n");
    }
    else if (strcmp(day, "Fri") == 0 || strcmp(day, "fri") == 0){
        printf("The day number is : 5\n");
    }
    else if (strcmp(day, "Sat") == 0 || strcmp(day, "sat") == 0){
        printf("The day number is : 6\n");
    }
    else if (strcmp(day, "Sun") == 0 || strcmp(day, "sun") == 0){
        printf("The day number is : 7\n");
    }
    else {
        printf("Invalid day entered.\n");
    }

    return 0;
}
