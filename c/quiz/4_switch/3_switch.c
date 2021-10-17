#include<stdio.h>
void main() {
	switch((1+1)/2+1) {
		case 1:
			printf("case1 executed.");
			break;
		case 2:
			printf("case2 executed.");
			break;
		default:
			printf("default case executed.");		
	}
}