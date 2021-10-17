// break statement in loop
#include<stdio.h>
int main() {
	// use of break statement is to come out from loop
	// after break no iteration will go on 
	// if nested loop are present then only the loop which have
	// break statement will be stopped , outer will not be affected
	int i;
	for(i=0;i<6;i++) {
		if(i==3) break;
		printf("%d\n",i);
	}
	/*
	Output : 
			0
			1
			2
	*/
}
