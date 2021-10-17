// continue statement in loop
#include<stdio.h>
int main() {
	// use of continue statement is to skip iteration
	// so whatever written under continue will not be executed 
	// in current iteration and next iteration will start
	int i;
	for(i=0;i<6;i++) {
		if(i==3) continue;
		printf("%d\n",i);
	}
	/*
	Output : 
			0
			1
			2
		 	4
			5	
	*/
}
