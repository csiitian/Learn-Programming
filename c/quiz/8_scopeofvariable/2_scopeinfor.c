#include<stdio.h>
void main() {
	int i=0;
	for(;i<5;i++) {
		int x;
		if(i == 3) 
			x = 3;
	}
	printf("%d",x);
}
//Output = Out of Scope
