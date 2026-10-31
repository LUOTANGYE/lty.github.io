#include<stdio.h>
#define M 3
#define N 4
void output(int b[M][N],int row,int colum)
{
	int i = 0;
	int j = 0;
	for(i = 0;i < row; i++)
	{
		for(j = 0;j < colum; j++)
		{
			printf("%d\t",b[i][j]);	
		}
		printf("\n");	
	}	
	
}
int main (void)
{

	int arr[M][N] = {{1,4,7,10},{2,5,8,11},{3,6,9,12}};
	output(arr,M,N);
	return 0;
}
