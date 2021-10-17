#include<stdio.h>
void main() {
	int i = 1;
	while(i--) {
		int i = 2;
		for(;i>=0;i--) {
			printf("%d", i);
		}
		printf("\n");
	}
	printf("%d",i);
}

/*

Ouput :-
210
-1

*/
