#include<stdio.h>
void main() {
	int i = 5;
	for(i=0;i<5;i++) {
		if(i==2)
			break;
		printf("%d",i);
	}
}
