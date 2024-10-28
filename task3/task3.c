#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x = rand()%9;
	int y = rand()%9;
	int map[10][10];

	for(int i = 0 ; i < sizeof(map)/sizeof(map[0]) ; i++)
	{
		for(int j = 0 ; j < sizeof(map[0])/sizeof(int) ; j++)
		{
			map[0][0] = 0;//initilize arrays with zeros
		}
	}

	map[x][y] = 1;//treasure
		      //
	for(int i = 0 ; i < sizeof(map)/sizeof(map[0]) ; i++)
	{
		for(int j = 0 ; j < sizeof(map[0])/sizeof(int) ; j++)
		{
			if(map[i][j] == 1)
			{
				printf("found treasure at [%d][%d]\n",i,j);
				return 0;
			}
		}
	}
	return 0;
}
