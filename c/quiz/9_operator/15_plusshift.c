#include<stdio.h>
void main() {
	printf("%d",1<<2+3<<4);
}

/*
Output : 512
The precedence of + is higher than <<
and << associativity is left to right .
1<<(5)<<4 = (1<<5)<<4
*/
