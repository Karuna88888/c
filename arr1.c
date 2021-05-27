#include<stdio.h>
 
void main()
{
    int array[10], i, num;
    printf("Enter size of an array : ");
    scanf("%d",&num);
    printf("Enter elements in array: \n");
    for(i=0;i<num;i++) 
    {
        scanf("%d", &array[i]);
    }
    printf("Even numbers in given array are: ");
    for (i = 0; i < num; i++) 
    {
        if (array[i] % 2 == 0) 
        {
            printf("%d \t", array[i]);
        }
    }
    printf("\nOdd numbers in given array are: ");
        for(i=0;i<num;i++) 
        {
            if (array[i]%2 != 0) 
            {
                printf("%d \t", array[i]);
            }
        }
}