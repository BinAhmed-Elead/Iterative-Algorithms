#include <stdio.h>


int main()
{
	int intNumber;
	printf("Enter Number of Rows: ");
	scanf("%d",&intNumber);
	printf("part(a)\n");
	for(int i = 0; i < intNumber ; i++)
	{
		for(int j = i; j < intNumber ; j++)
		{
			printf(" ");
		}
		for(int j = intNumber; j > intNumber-i-1 ; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("part(b)\n");
	int i = 0;
	while(i < intNumber)
	{
		int j = i;
		while(j < intNumber)
		{
			printf(" ");
			j++;
		}
		j = intNumber;
		while(j > intNumber-i-1)
		{
			printf("*");
			j--;
		}
		printf("\n");
		i++;
	}
	return 0;
}
