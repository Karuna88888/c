#include <stdio.h>
int main()
{
     
    int week;
    printf("Enter week number: ");
    scanf("%d",&week);
    if(week==1)
        printf("Its Monday");
    else if(week==2)
        printf("Its Tuesday");
    else if(week==3)
        printf("Its Wednesday");
    else if(week==4)
        printf("Its Thursday");
    else if(week==5)
        printf("Its Friday");
    else if(week==6)
        printf("Its Saturday");
    else if(week==7)
        printf("Its Sunday");
    else
    {
        printf("Invalid input");
    }
    
    return 0;
}