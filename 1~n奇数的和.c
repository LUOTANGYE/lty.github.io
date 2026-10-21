#include <stdio.h>
int sum_odd(int n)
{
	int sum = 0;
	int i = 1;
	for(i=1;i<=n;i++)
	 {
	 	if(i%2!=0)
	 	{
		 
	 	sum = sum + i;
		}
	}

	return sum;
}
int main(void)
{
	int n = 0;
	int ans = 0;
	printf("请输入n的值："); 
	scanf("%d",&n);
	ans = sum_odd(n);
	printf("1~n的奇数和：%d",ans);
	return 0;
}
	
