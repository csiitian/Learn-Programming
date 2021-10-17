#include<stdio.h>
void main() {
	char str[10] = "Hello";
	printf("%0s\n",str);
	printf("%10s\n",str);
	printf("%-10s\n",str);
	printf("%.3s\n",str);
	printf("%-.3s\n",str);
	printf("%10.3s\n",str);
	printf("%-10.3s\n",str);
	printf("%10.7s\n",str);
	printf("%-10.7s\n",str);
}
/*
Output : 
Hello
     Hello
Hello
Hel
Hel
       Hel
Hel
     Hello
Hello   
*/
