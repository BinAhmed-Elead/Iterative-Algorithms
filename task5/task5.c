#include <stdio.h>
#include <stdlib.h>


int main()
{
	int rgb_image[10][10][3];
	int grayscale[10][10];
	for(int i = 0 ; i < 10 ; i++)
	{
		for(int j = 0 ; j < 10 ; j++)
		{
			rgb_image[i][j][0] = rand()%256;
			rgb_image[i][j][1] = rand()%256;
			rgb_image[i][j][2] = rand()%256;
			printf("{r:%3d, g:%3d, b:%3d} ",rgb_image[i][j][0],rgb_image[i][j][1],rgb_image[i][j][2]);
		}
		printf("\n");
	}
	printf("\n\n");
	for(int i = 0 ; i < 10 ; i++)
	{
		for(int j = 0 ; j < 10 ; j++)
		{
			grayscale[i][j] = 0.299*(float)rgb_image[i][j][0]+0.587*(float)	rgb_image[i][j][1]+0.114*(float)rgb_image[i][j][2];
			printf("%3d ",grayscale[i][j]);
		}
		printf("\n");
	}
	return 0;
}
