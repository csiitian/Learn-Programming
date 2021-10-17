#include<stdio.h>
void main() {
	printf("%d",sizeof(printf("Hello")));
}
/*
Output : 4 
An expression inside sizeof operator is not 
evaluated .
*/
