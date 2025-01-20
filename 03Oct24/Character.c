#include <stdio.h>

int main(){
    char grade;
    printf("Please insert your grade: ");
    scanf("%c", &grade);

    if (grade == 'A' || grade == 'a'){
        printf("Excellent");
    }
    else if (grade == 'B' || grade == 'b'){
        printf("Very Good");
    }
    else if (grade == 'c' || grade == 'C'){
        printf("Good");
    }
    else if (grade == 'D' || grade == 'd'){
        printf("Average");
    }
    else if (grade == 'F' || grade == 'f'){
        printf("Poor");
    }

}