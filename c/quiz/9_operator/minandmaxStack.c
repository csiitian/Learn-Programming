#include<stdio.h>
//i have define all variables to global 
//so i can easily access them through all functions
#define MAX_SIZE 10
int min;
int max;
int top = -1;
int stack[MAX_SIZE];
void pushStack(int data) {
	int temp = data;
	if(top == -1) {
		min = data;
		max = data;
	} else if(min > data) {
		data = data - min;
		min = temp;
	} else if(max < data) {
		if(max < 0) data = data - max;
		else data = data + max;
		max = temp;
	}
	stack[++top] = data; 
}
int popStack() {
	if(top == -1) {
		printf("Stack is empty.\n");
		return 0;
	}
	int temp = stack[top--];
	int popped;
	if(temp < min) {
		popped = min;
		temp = (-1) * temp;
		min = temp + min;
	} else if(temp > max) {
		popped = max;
		if(max < 0) max = max - temp;
		else max = temp - max;
	} else {
		popped = temp;
	}
	return popped;
}
int main() {

	int i = 1,x;
	while(i != 5) {
		printf("enter 1 for push data\n2 for pop data\n3 for get Minimum\n4 for get Maximum.\n5 for exit.\n");
		scanf("%d",&i);
		switch(i) {
			case 1:
				printf("enter data to be pushed in the stack.\n");
				scanf("%d",&x);
				pushStack(x);	
				break;
			case 2:
				printf("%d is popped from stack.\n",popStack());
				break;
			case 3:
				printf("minimum is %d.\n",min);
				break;
			case 4:
				printf("maximum is %d.\n",max);
				break;
			case 5:
				printf("Thank you to use this service.\n");
				printf("--------see you--------.");
				break;
			default:
				printf("please enter a valid key between 1 to 5.");
				break;
		}
	}
}
