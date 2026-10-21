#include <stdio.h>
int main (void) 
{
	int num = 0;
	printf("请输入一个数字：\n");
	scanf("%d",&num);
	(num%2==0)?printf("偶数"):printf("奇数") ;
	return 0;
}
