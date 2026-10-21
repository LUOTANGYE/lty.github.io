#include <stdio.h>
int main (void)
{
	int a = 0;
	int b = 0;
	int max = 0;
	printf("请输入a和b的值:");
	scanf("%d%d",&a,&b);
	max = a;
	if (max<b)
		max =b;
	printf("max:%d\n",max);
	return 0;
	
	
	}
