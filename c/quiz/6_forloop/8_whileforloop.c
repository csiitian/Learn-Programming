#include<stdio.h>
void main() {
	int i,count = 0,flag = 1;
	while(flag) {
		flag = 0;
		count+=1;
		for(i=0;i<5;i++)
			if(i*count <= 10) {
				printf("YES");
				flag = 1;
			}	
	}
}
