#include <stdio.h>
int main()
{
    char a;
    printf("Enter a character: ");
    scanf("%f",&a);

    if(a>64 && a<91)
    {
        printf("Given character is Uppercase");
    }
    else
        printf("Given character is Lowercase");
    
    return 0;
}