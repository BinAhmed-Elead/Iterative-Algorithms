#include <stdio.h>


int main()
{
	int intNumber;
	printf("please enter the number of minutes: ");
	scanf("%d",&intNumber);
	for(int i = 0; i < intNumber ; i++)
	{
		for(int j =0 ; j <= 59 ; j++){
			printf("%02d:%02d\n",i,j);
		}
	}	
	return 0;
}
