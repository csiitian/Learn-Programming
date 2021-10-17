// find the third angle where first 
// and second angle are given
#include<stdio.h>
int main() {
	int a,b,c;
	// a, b, c are three 
	// angles of triangles
	scanf("%d%d", &a, &b);
	// calculate third angle
	c = 180 - (a + b);
	printf("Third angle is %d", c);
}