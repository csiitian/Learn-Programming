#include<stdio.h>
void main() {
	char *s[] = {"Knowledge","is","power"};
	char **p;
	p = s;
	printf("%s ",++*p);
	printf("%s ",*p++);
	printf("%s ",++*p);
}
/*
Output : nowledge nowledge s
++ and * has same priority but associativity
is right to left .
*/
