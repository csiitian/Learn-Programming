#include<stdio.h>
void main() {
	int i = 8;
	int p = i++ * i++;
	printf("%d",p);
}
/*
Output : Compiler dependent
Associativity of +,-,*,/ is depend on compiler 
*/
