// call by value
#include<stdio.h>
void swap_call_val(int a,int b);
int main() {
	// swap two number using call by value 
	int a,b;
	scanf("%d%d",&a,&b);
	printf("Before swap a = %d and b = %d",a,b);
	swap_call_val(a,b);
	printf("After swap_call_val function a = %d and b = %d",a,b);
}
void swap_call_val(int a,int b) {
	int temp = a;
	a = b;
	b = temp;
	printf("Inside function a = %d and b = %d",a,b);
}
