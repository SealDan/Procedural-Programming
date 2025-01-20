#include <stdio.h>

int main(){
    int timetable;
    int i;
    int answer;

    printf("Enter time table to generate: ");
    scanf("%d", &timetable);

    printf("Multiplication Table:\n");

    for (i=1; i<=12; i++){
        answer = i * timetable;
        printf("%d x %d = %d\n", i, timetable, answer);
    }
}