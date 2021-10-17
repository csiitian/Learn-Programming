#include<stdio.h>
void main() {
	int x = 10 , y = 20;
	x = x ^ y;
	y = x ^ y;
	x = x ^ y;
	printf("%d %d",x,y);
}
/*
Output : 20 10
Swap variables
*/
