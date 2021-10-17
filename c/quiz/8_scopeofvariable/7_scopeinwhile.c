#include<stdio.h>
void main() {
	int i = 5;
	int flag = 1;
	int count = 0;
	while(1) {
		count++;
		int i = 5;
		for(;i>0;i--)
			if(i*count > 20)
				flag = 0;
		if(flag == 0) 
			break;
		printf("%d",count);		
	}
	printf("%d",i);
}
//Output = 12345
