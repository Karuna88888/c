#include <stdio.h>

int main()
{
    int ang1,ang2,ang3,sum; 
    printf("Enter ang1: ");
    scanf("%d",&ang1);
    printf("Enter ang2: ");
    scanf("%d",&ang2);
    printf("Enter ang3: ");
    scanf("%d",&ang3);

    sum=ang1+ang2+ang3;
    if(sum==180 && ang1>0 && ang2>0 && ang3>0)
        printf("triangle is valid");
    else
    {
        printf("triangle is not valid");
    }
    
    
    return 0;
}