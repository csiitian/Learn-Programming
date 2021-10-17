#include<stdio.h>
void main() {
	int i=1,j=2;
	printf("%d",sizeof(j += i));
	printf("%d",j);
}
/*
Output : 42
The expression inside sizeof operator
not evaluated so the value of j will
not change .
*/
