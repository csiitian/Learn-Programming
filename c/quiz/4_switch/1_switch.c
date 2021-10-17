#include<stdio.h>
void main() {
	int x = 1;
	switch(x) {
		case 1: 
			printf("case1 executed.");
			break;
		case 2:
			printf("case2 executed.");
			break;
		default:
			printf("default case executed.");
			break;		
	}
}