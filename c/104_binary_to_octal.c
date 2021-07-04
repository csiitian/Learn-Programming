// binary to octal
// 100101 => 45
// pair of 3
// so divide by 1000
#include<stdio.h>
int main() {
	int num;
	scanf("%d",&num);
	int ans = 0;
	int pow = 1;
	while(num > 0) {
		switch(num%1000) {
			case 0:
				ans = ans + pow*0;
				break;
			case 1:
				ans = ans + pow*1;
			 	break;
			case 10:
				ans = ans + pow*2;
				break;
			case 11:
				ans = ans + pow*3;
			 	break;
			case 100:
				ans = ans + pow*4;
				break;
			case 101:
				ans = ans + pow*5;
			 	break;
			case 110:
				ans = ans + pow*6;
				break;
			case 111:
				ans = ans + pow*7;
			 	break;	 	 	 		
		}
		num = num/1000;
		pow = pow*10;
	}
	printf("Equalent octal is %d",ans);
}
