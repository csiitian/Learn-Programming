// call by reference
#include<stdio.h>
void swap_call_ref(int *a,int *b);
int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	printf("Before swap a = %d and b = %d",a,b);
	swap_call_ref(&a,&b);
	printf("After swap_call_val function a = %d and b = %d",a,b);
}
void swap_call_ref(int *a,int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("Inside function a = %d and b = %d",*a,*b);
}
