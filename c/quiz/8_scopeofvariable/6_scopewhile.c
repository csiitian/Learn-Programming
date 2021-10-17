#include<stdio.h>
void main() {
	int i = 5;
	int flag = 1;
	while(1) {
		int i = 5;
		for(;i>0;i--)
			if(i == 1)
				flag = 0;
		if(flag == 0) 
			break;		
	}
	printf("%d",i);
}
//Output =5
