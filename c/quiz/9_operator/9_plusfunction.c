#include<stdio.h>
int f1() {printf("Hello");return 1;}
int f2() {printf("Vikas");return 1;}
void main() {
	int p = f1() + f2();
}
/*
Output : Compiler dependent
If compiler is taking precedence left to right
then HelloVikas else VikasHello .
*/
