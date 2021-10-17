#include<stdio.h>
void main() {
	switch(2) {
		case 1:
			printf("case1 executed.");
			break;
		case 1+1:
			printf("case1+1 executed.");
			break;
		case 2:
			printf("case2 executed.");
			break;
		default:
			printf("default case executed.");
			break;	
	}
}