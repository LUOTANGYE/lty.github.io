#include<stdio.h>
int main(void)
{
int week = 0;	
printf("今天星期几：");
scanf("%d",&week);
switch(week)
{
case 1:printf("今天是星期一\n"); break;
case 2:printf("今天是星期二\n"); break;
case 3:printf("今天是星期三\n"); break;
case 4:printf("今天是星期四\n"); break;
case 5:printf("今天是星期五\n"); break;
default:printf("你输入的变量有误！\n") ;
}
return 0;

}
