#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main(){
    int a,b,c;
    int attempts = 3;
    float discriminat;
    float quadratic1;
    float quadratic2;
    
    while (attempts > 0){

        printf("Please enter first coeficient: ");
        scanf(" %d", &a);
        if (a/a == 1)
        {
            printf("Please enter second coeficient: ");
            scanf(" %d", &b);
            if (b/b == 1)
            {
                printf("Please enter third coeficient: ");
                scanf(" %d", &c);
                if (c/c == 1){

                    discriminat = pow(b,2) - (4*a*c);

                    quadratic1 = (-b + sqrt(b*b - 4 * a * c))/(2*a);

                    quadratic2 = (-b - sqrt(b*b - 4 * a * c))/(2*a);

                    if (discriminat > 0)
                    {
                        printf("There are 2 roots! The 2 roots are %f and %f\n", quadratic1, quadratic2);
                    }
                    else if (discriminat == 0)
                    {
                        printf("There are 1 root! The root is %f\n", quadratic1);
                    }
                    else
                    {
                        printf("There are no roots!\n");
                    }

                }
                else{
                    printf("Error, please enter a numerical digit!\n");
                    attempts--;
                }
            }
            else{
                printf("Error, please enter a numerical digit!\n");
                attempts--;
            }
        }
        else{
            printf("Error, please enter a numerical digit!\n");
            attempts--;
        }

    }
    printf("You have run out of attempts!");
}