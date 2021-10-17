// calculate square and cube of a number
#include<stdio.h>
int main() {
	int num;
	scanf("%d",&num);
	// calculate square of given number
	int square = num*num;
	// calculate cube of given number
	int cube = num*num*num;
	printf("Square : %d and Cube : %d", 
			square, cube);
}