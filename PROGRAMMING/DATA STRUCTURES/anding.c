#include<stdio.h>
#include<string.h>
int bin[100];
int sbmA[32],sbmB[32],sbmC[32];
void fill(int bin[],int start,int end,int temp)
{
	int rem,i;
	int e = end;
	while(temp > 0)
	{

		rem = temp % 2;
		bin[end] = rem;
		end--;
		temp = temp / 2;
	}

	for(i=start;i<=e;i++)
	printf("%d ",bin[i]);

}

int fun(char ch)
{
	if(ch=='1')
	return 1;
	else if(ch=='2')
	return 2;
	else if(ch=='3')
	return 3;
	else if(ch=='4')
	return 4;
	else if(ch=='5')
	return 5;
	else if(ch=='6')
	return 6;
	else if(ch=='7')
	return 7;
	else if(ch=='8')
	return 8;
	else if(ch=='9')
	return 9;
	else if(ch=='0')
	return 0;
}

int check(int temp)
{
	if(temp>255)
		return 0; //incorrect

	return 1; //correct
}

int checkbin(int bin[])
{
	if(bin[0]==0)
		return 'a';
	else if(bin[0]==1 && bin[1]==0)
		return 'b';
	else if(bin[0]==bin[1]==1 && bin[2]==0)
		return 'c';
	else if(bin[0]==bin[1]==bin[2]==1 && bin[3]==0)
		return 'd';
	else if(bin[0]==bin[1]==bin[2]==bin[3]==1)
		return 'e';
}
int anding(int bin,int sbm)
{
	if(bin==0 && sbm==0)
		return 0;
	else if(bin==0 && sbm==1)
		return 0;
	else if(bin==1 && sbm==0)
		return 0;
	else if(bin==1 && sbm==1)
		return 1;
}
int main()
{
	char ip[15],i,j;
	int chance = 0;
	int netid[32],hostid[32],m,r;
	
	printf("\n Enter IP Address : ");
	gets(ip);
	
	int len=strlen(ip);
	int temp=0,flag=0,first,k=0;
	
	for(i=0;i<32;i++)
	bin[i] = 0;

	for(i=0;i<=len;i++)
	{
		if(ip[i]=='.' || i==len)
		{
			if(check(temp)==0)
			{
				printf("\n INVALID IP ");
				return 0;
			}
			if(flag==0)
			{
				first=temp;
				flag=1;
			}
			if(chance == 0)
			{
				fill(bin,0,7,temp);
				printf(".");
			}

			else if(chance == 1)
			{
				fill(bin,8,15,temp);
				printf(".");
			}
			else if(chance == 2)
			{
				fill(bin,16,23,temp);
				printf(".");
			}
			else if(chance == 3)
			{
				fill(bin,24,31,temp);
			}
			temp=0;
			chance++;

		}
		else
		{
			temp = temp*10 + fun(ip[i]);
		}
	}

	if(checkbin(bin)=='a')
	{
		printf("\n Class A \n");
		printf("\n\n Net ID : ");
		for(m=0;m<=7;m++)
		{
			sbmA[m]=1;
			r=anding(bin[m],sbmA[m]);
			netid[m]=r;
		}
		for(m=8;m<=31;m++)
		{
			netid[m]=0;
		}
		for(m=0;m<=31;m++)
		{
			printf("%d ",netid[m]);
		}
		printf("\n\nHost ID : ");
		for(m=0;m<=7;m++)
		{
			hostid[m]=0;
		}
		for(m=8;m<=31;m++)
		{
			sbmA[m]=1;
			r=anding(bin[m],sbmA[m]);
			hostid[m]=r;
		}
		for(m=0;m<=31;m++)
		{
			printf("%d ",hostid[m]);
		}
	}
		
	else if(checkbin(bin)=='b')
	{
		printf("\n Class B \n");
		printf("\n\n Net ID : ");
		for(m=0;m<=15;m++)
		{
			sbmB[m]=1;
			r=anding(bin[m],sbmB[m]);
			netid[m]=r;
			printf("%d ",netid[m]);
		}
		for(m=16;m<=31;m++)
		{
			netid[m]=0;
		}
		for(m=0;m<=31;m++)
		{
			printf("%d ",netid[m]);
		}
		printf("\n\nHost ID : ");
		for(m=0;m<=15;m++)
		{
			hostid[m]=0;
		}
		for(m=16;m<=31;m++)
		{
			sbmB[m]=1;
			r=anding(bin[m],sbmB[m]);
			hostid[m]=r;
		}
		for(m=0;m<=31;m++)
		{
			printf("%d ",hostid[m]);
		}
	}
		
	else if(checkbin(bin)=='c')
	{
		printf("\n Class C \n");
		printf("\n\n Net ID : ");
		for(m=0;m<=23;m++)
		{
			sbmC[m]=1;
			r=anding(bin[m],sbmC[m]);
			netid[m]=r;
			printf("%d ",netid[m]);
		}
		for(m=24;m<=31;m++)
		{
			netid[m]=0;
		}
		for(m=0;m<=31;m++)
		{
			printf("%d ",netid[m]);
		}
		printf("\n\nHost ID : ");
		for(m=0;m<=23;m++)
		{
			hostid[m]=0;
		}
		for(m=24;m<=31;m++)
		{
			sbmC[m]=1;
			r=anding(bin[m],sbmC[m]);
			hostid[m]=r;
		}
		for(m=0;m<=31;m++)
		{
			printf("%d ",hostid[m]);
		}
	}
		
	else if(checkbin(bin)=='d')
		printf("\n Class D \n");
		
	else if(checkbin(bin)=='e')
		printf("\n Class E \n");
		
}