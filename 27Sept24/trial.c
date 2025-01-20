#include <stdio.h>

int main(){
    int student;
    char email[30];

    printf("What is your Student ID? \n");
    scanf("%d", &student);
    printf("What is your email? \n");
    scanf("%s", email);
    

    printf("Email: %s\nStudent ID: %d", email, student);



}