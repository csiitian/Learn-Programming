#include<stdio.h>
void main() {
	int a=10,b=20,c=30;
	if(c>b>a) {
		printf("TRUE");
	} else {
		printf("FALSE");
	}
}
/*
Output : FALSE
Associativity is left to right so it will
be like as ((c>b)>a) so it is (1>a) which 
is FALSE .
*/
