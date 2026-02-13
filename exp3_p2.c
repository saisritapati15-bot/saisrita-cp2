#include<stdio.h>
typedef struct date
{
	int day;
	int month;
	int year;
}date;
int main()
{
	date d5;
	printf("enter the name of date :");
	scanf("%d",&d5.day);
	printf("enter the name of month :");
	scanf("%d",&d5.month);
	printf("enter the name of year :");
	scanf("%d",&d5.year);
	if(d5.day<=31 && d5.month<=12)
		printf("%d/%d/%d",d5.day,d5.month,d5.year);
	else 
		printf("not valid date :");
}
