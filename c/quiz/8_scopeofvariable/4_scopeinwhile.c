#include<stdio.h>
void main() {
	while(1) {
		int i = 0;
		if(i==5) 
			break;
		i++;	
	}
	printf("%d",i);
}
//Output = Out of Scope 
