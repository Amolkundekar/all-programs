#include<stdio.h>
int water_usage(int use)
{
	float bill;
	if(use<=1000)
	{
	
	  	printf("bill is 155 Rs");
	}
	
	else if(use>1000 && use<=2000)
	{
		bill=(use-1000)*0.175 + 155;
		printf("bill is %f", bill);

	}

	else if(use>2000 && use<=3000)
	{
		bill=155+1000*0.175 + (use-2000)*0.200;
		printf("bill is %f", bill);
	}
	else
	{
		printf("bill is=700 Rs");
	}

}



void main()
{
int use;

printf("enter water in cubic feet:\n");
scanf("%d", &use);

water_usage(use);



}
