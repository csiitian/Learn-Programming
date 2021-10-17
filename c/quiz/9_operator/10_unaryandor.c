#include<stdio.h>
void main() {
	int a = 1;
	int b = 1;
	int c = a || --b;
	int d = a-- && --b;
	printf("%d %d %d %d",a,b,c,d);
}
/*
Ouput : 0 0 1 0
In or if left side is true then right side is 
whatever it will not be evaluated and in and 
if left side is false then right side is whatever
it will not be evaluated .
*/

