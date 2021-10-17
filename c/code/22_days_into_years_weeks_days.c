// convert days in year , weak and days
// 1 year = 365 days
// 1 weak = 7 days
// 1 day = 1 day
#include<stdio.h>
int main() {
	int days;
	scanf("%d",&days);
	int year = days/365;
	days = days%365;
	int weak = days/7;
	days = days%7;
	printf("%d year : %d weak : %d day",year,weak,days);
}
