#include<stdio.h>
void main() {
	int i,j;
	for(i=0;i<2;i++) {
		for(j=0;j<3;j++) {
			if(j==1)
				continue;
			printf("%d",j);	
		}
	}		
}
