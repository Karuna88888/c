#include <stdio.h>
#include<ctype.h>

int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);     //c=getchar();
    if(islower(c))
        putchar(toupper(c));    //printf("%c",toupper(c));
    else
        putchar(tolower(c));
    
    
    return 0;
}