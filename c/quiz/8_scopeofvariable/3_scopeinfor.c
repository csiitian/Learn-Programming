#include<stdio.h>
void main() {
	int i;
	for(i=0;i<5;i++) {
		if(i==3) {
			int x;
			x = 3;
		} else {
			printf("%d",x);
		}
	}
}
//Output = Out of Scope
