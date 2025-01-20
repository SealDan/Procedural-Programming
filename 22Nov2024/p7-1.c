#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char sentance[100];

    printf("Enter your sentance: ");
    gets(sentance);

    for (int j=0; sentance[j]!='\0'; j++){
        sentance[j] = isalpha(sentance[j]);
    }

    for (int i=0; sentance[i]!='\0'; i++){
        if (sentance[0]){
            sentance[0] = toupper(sentance[0]);
        }
        if (isspace(sentance[i])){
            sentance[i+1] = toupper(sentance[i+1]);
        }
    }
    printf("Title Case Conversion: %s", sentance);
}
   
         