// power of a number 
// a^b = a*a*a*.. b times
#include<stdio.h>
int main() {
	int base,pow;
	scnaf("%d%d",&base,&pow);
	int i,ans = 1;
	for(i=0;i<pow;i++) ans = ans*base;
	prinf("%d^%d = %d",base,pow,ans);
} 
