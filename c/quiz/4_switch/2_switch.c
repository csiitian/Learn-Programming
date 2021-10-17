#include<stdio.h>
void main() {
	int x = 2;
	switch(x) {
		case 1:
			printf("case1 executed.");
		case 2:
			printf("case2 executed.");
		default:
			printf("default case executed.");
			break;		
	}
}