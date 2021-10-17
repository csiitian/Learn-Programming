#include<stdio.h>
void main() {
	int y = 0;
	int x = (~y == 1);
	printf("%d",x);
}
/*
Output : 0
~0 is not 1 may be -1 .
*/
