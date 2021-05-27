#include<stdio.h>

void Total_Notes(int);
int main()
{
 	int amt;
 	printf("\n Please Enter the Amount of Cash: ");
 	scanf("%d",&amt);
 
	Total_Notes(amt);
 	return 0;
}

void Total_Notes(int amt)
{
	int a[8]={500, 100, 50, 20, 10, 5, 2, 1};
	int temp;	
	temp=amt;
  
 	for(int i=0;i<8;i++)
 	{
 		printf("\n %d Notes is = %d", a[i], temp / a[i]);
 		temp = temp % a[i];
 	}
}