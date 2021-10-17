#include<stdio.h>
void main() {
	int i =0;
	do {
		printf("%d",i);
		i = i++;
	} while(i<5);
}

/*
Undefined behavior
*/
