#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main (){
    float a, b, c;
    float discriminat;
    float quadratic1;
    float quadratic2;
    int i = 3;

    quadratic1 = 0;
    quadratic2 = 0;

    a = 0;
    b = 0;
    c = 0;
   

    while (i>0)
    {
        printf("Please enter 3 coeficients!\ncoefficient a: ");
        scanf(" %f", &a);
        printf("coefficient b: ");
        scanf(" %f", &b);
        printf("coefficient c: ");
        scanf(" %f", &c);

        discriminat = pow(b,2) - (4*a*c);

        quadratic1 = (-b + sqrt(b*b - 4 * a * c))/(2*a);

        quadratic2 = (-b - sqrt(b*b - 4 * a * c))/(2*a);

        if (isdigit(a) != 1 && isdigit(b) != 1 && isdigit(c) != 1)
        {
            if (discriminat > 0)
            {
                printf("There are 2 roots! The 2 roots are %f and %f\n", quadratic1, quadratic2);
            }
            else if (discriminat = 0)
            {
                printf("There are 1 root! The root is %f\n", quadratic1);
            }
            else
            {
                printf("There are no roots!\n");
            }
        }
        else{
            printf("Error! Please enter a numerical digit!\n");
            i = i-1;
        }
    }
    printf("You have made to many errors! You have run out of attempts!\n");
    

    
        

        


       
   

    

    
}