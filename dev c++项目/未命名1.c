#include<stdio.h>
int main (void)
{
	int arr []={45,56,26,85,89,65,23};
	int n = sizeof(arr)/sizeof(arr[0]);
	int i,j,temp;
	printf("原始数据：");
	for(i=0;i<n;i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("结果数据：\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
 } 
