#include<stdio.h>
void main() {
	int i,count = 0,flag = 1;
	while(1) {
		count+=1;
		for(i=0;i<5;i++)
			printf("YES");
		if(i*count == 10)
			break;	
	}
}
