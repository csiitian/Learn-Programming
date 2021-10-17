#include<stdio.h>
int main() {
	int year;
	scanf("%d",&year);
	// leap year or not
	// it should be fully divided by 400
	// if it is fully divided by 4 then it should not
	// be fully divided by 100
	if(year%400 == 0 || (year%4==0&&year%100!=0)) 
		printf("%d is a Leap Year",year);
	else 
		printf("%d is not a Leap Year",year);
}
// 2000 1600 1200 800 => leap year
// 1900 1800 1700 2100 => not leap year
// 2004 => leap year
