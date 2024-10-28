#include <stdio.h>


int main()
{
	int population[10] = {0};
	printf("Enter the population of  1-city: ");
	scanf("%d",&population[0]);
	int min = population[0];
	int max = min;
	int sum = max;
	for(int i = 1 ; i < sizeof(population)/sizeof(int); i++)
	{
		printf("Enter the population of %2d-city: ",i+1);
		scanf("%d",&population[i]);
		if(min > population[i])
			min = population[i];
		if(max < population[i])
			max = population[i];
		sum += population[i];
	}
	printf("min: %d\n",min);
	printf("max: %d\n",max);
	printf("mean: %d\n",sum/(sizeof(population)/sizeof(int)));
	return 0;
}
