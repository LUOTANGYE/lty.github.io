/*

#include<stdio.h>//输入1--n之间的数 
int main (void)
{
	int i = 1;
	int n = 0;
	printf("请输入n的值")
	scanf("%d",&n); 
	while(i<=n)
	{
	printf("%d",i);
	i++;
	}	
    return 0;
    
 } 



#include<stdio.h>//计算m+...+n的值，用do while 语句 
int main (void)
{

int m = 0;
int n = 0;
int sum = 0;
printf("请输入m和n的值：");
scanf("%d%d",&m,&n);
do 
{
	sum = sum + m;
	m++;
}while(m<=n);
printf("总和=%d",sum);
return 0;
}
*/


#include <stdio.h>
int main (void)
{
	int i = 1;
	int n = 0;
	printf("请输入n的值：");
	scanf("%d",&n);
	for(i;i<=n;i++)
	printf("%d\n",i);
	return 0;
	 
	
	
	
	
 } 









