// find number of days in month
// 1 => January ..... 12 => December
#include<stdio.h>
int main() {
	int month;
	scanf("%d",&month);
	switch(month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("31 Days in %d th month",month);
			break;
		case 2:
			printf("28 Days in %d th month",month);
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("30 Days in %d th month",month);
			break;
		default :
			printf("Please make sure your input should be in range 1 to 12");
			break;				
	}
}
