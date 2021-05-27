#include<stdio.h>

int minmax(int a[],int n);
int sumavg(int a[],int n);
int main()
{
    int a[10],i,n;

    printf("\nEnter size of the array : ");
    scanf("%d", &n);

    printf("\nEnter elements in array : ");
    for(i=0; i<n; i++)
    {
 		scanf("%d",&a[i]);
    }
    minmax(a,n);
    sumavg(a,n);
    return 0;
}
int sumavg(int a[],int n)
{
   int i,total=0,avg;
    for (i = 0; i < n; i++)
    {
        total+=a[i];
    }
    avg = total / n;
    printf("\nSum of array elements are: %d\n", total);
    printf("Average of array elements: %d\n", avg);
}

int minmax(int a[],int n)
{
 	int min=a[0],max=a[0],i;
 	
    for(i=1;i<n;i++)
    {
       if(min>a[i])
       {
		  min=a[i];
            
       }
    }
    printf("Min element in array is: %d",min); 
    for(i=1;i<n;i++)
    {
       if(max<a[i])
       {
          max=a[i];      
       }
    }
    printf("\nMax number in array is: %d",max); 

}
