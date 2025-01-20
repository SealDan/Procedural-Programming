/*******************************************************/
/*                                                     */
/*      Program Name: Score Grade                      */
/*      Program Author: Daniello Jokhenka              */
/*      Date: 3 October 2006                           */
/*                                                     */
/*      Description:                                   */
/*                                                     */
/*******************************************************/



#include <stdio.h>

int main(){
    int score;
    printf("Please input your grade: ");
    scanf("%d", &score);

    if (score >= 0 && score <= 100){
        if (score <= 39){
            printf("Grade: Fail\n");
        }
        else if (score <=49){
            printf("Grade: D\n");
        }
        else if (score <=59){
            printf("Grade: C\n");
        }
        else if (score <=69){
            printf("Grade: B\n");
        }
        else if (score <=79){
            printf("Grade: A\n");
        }
        else if (score >=80){
            printf("Grade: A*\n");
        }
    }
    else{
        printf("Error! Please input your grade between 0 and 100!");
    }
}