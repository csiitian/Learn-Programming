// return largest number using function
#include<stdio.h>
int find_largest(int num1,int num2) {
	if(num1 > num2) return num1;
	else return num2;
}
int main() {
	int num1,num2;
	scanf("%d%d",&num1,&num2);
	int largest_num = find_largest(num1,num2);
	printf("Largest among %d and %d is %d",num1,num2,largest_sum);
}
