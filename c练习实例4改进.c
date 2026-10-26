/*题目：输入某年某月某日，判断这一天是这一年的第几天？

程序分析：以3月5日为例，应该先把前两个月的加起来，然后再加上5天即本年的第几天，特殊情况，闰年且输入月份大于3时需考虑多加一天。

闰年的判断规则是：普通年份能被4整除且不被100整除，或者年份能被400整除的整百年。

*/
#include<stdio.h>
int isLeapYear(int year)
{
	if((year % 4 == 0 && year % 100 != 0)|| (year % 400 == 0))
	{
		return 1;
	}
	return 0;
	
}
 
int main(void)
{
	int year,month,day;
	int i = 0;
	int daysInMonth [] = {31,28,31,30,31,30,31,31,30,31,30,31};
	printf("请输入年份，月份和日期（格式： 年 月 日）");
	if(scanf("%d %d %d", &year, &month, &day) != 3)
	{
		printf("输入无效，请输入正确的年份、月份和日期。\n");
		return 1;
	}
	if(year <= 0)
	{
		printf("年份不合法，请输入一个正整数。\n");
        return 1;
	}
	if (month<1 || month>12)
	{
		printf("月份不合法，请输入1到12之间的数字。\n");
        return 1;
	}
	if(isLeapYear(year))
	{
		daysInMonth [1] = 29;
	}
	if(day < 1 || day > daysInMonth[month - 1])
	{
		printf("日期不合法，请输入有效的日期。\n");
        return 1;
	}
	int totalDays = 0;
	for(i = 0; i  < month - 1; i++)
	{
		totalDays += daysInMonth [i]; 
	}
	totalDays += day;
	printf("%d年%d月%d日是该年的第%d天",year,month,day,totalDays) ;
	return 0;
	  
	
} 
