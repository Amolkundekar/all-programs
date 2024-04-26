#include <stdio.h>
#include <string.h>

int main()
{
	char data[4];
	printf("enter the data\n");
	scanf("%s",data);
	int d[4];
	int choice;
	printf("enter the choice\nfor even = 1\nfor odd = 2\n");
	scanf("%d", &choice);

	for(int i = 0; i<4; i++)
	{
	 	d[i] = (data[i]-48);
	}

	
	int size = 7;
	int hammingcode[size];

	hammingcode[2] = d[0];
	hammingcode[4] = d[1];
	hammingcode[5] = d[2];
	hammingcode[6] = d[3];


	if(choice == 1)
{
	hammingcode[0] = hammingcode[2] ^ hammingcode[4] ^ hammingcode[6];
	hammingcode[1] = hammingcode[2] ^ hammingcode[5] ^ hammingcode[6];
	hammingcode[3] = hammingcode[4] ^ hammingcode[5] ^ hammingcode[6];
}

	else if(choice == 2)
{
	hammingcode[0] = !(hammingcode[2] ^ hammingcode[4] ^ hammingcode[6]);
	hammingcode[1] = !(hammingcode[2] ^ hammingcode[5] ^ hammingcode[6]);
	hammingcode[3] = !(hammingcode[4] ^ hammingcode[5] ^ hammingcode[6]);
	
	
	

}

	
	for(int k = 0; k <7; k++)
	{
		printf("%d", hammingcode[k]);

	}

return 0;
}
