#include<stdio.h>
void main() {
	int x = 10;
	int y = 20;
	x += y += 10;
	printf("%d %d",x,y); 
}
/*
Output : 40 30
right to left associativity
*/

