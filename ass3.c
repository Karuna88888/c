#include <stdio.h>

int main()
{
    int i=1; 
    int num,mul;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(i<=10)
    {
        mul=num*i;
        printf("\n %d * %d = %d",num,i,mul);
        i++;
    }
    return 0;
}

