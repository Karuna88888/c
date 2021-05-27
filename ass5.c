#include <stdio.h>

int main() 
{
    int num,original,rem,result=0;
    printf("Enter a three-digit integer: ");
    scanf("%d",&num);
    original=num;

    while (original != 0)
    {
        rem= original % 10;
        result += rem * rem * rem;
        original /= 10;
    }

    if (result==num)
        printf("%d is an Armstrong number: ",num);
    else
        printf("%d is not an Armstrong number: ",num);

    return 0;
}