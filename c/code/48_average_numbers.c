// find average of n numbers
#include<stdio.h>
int main() {
	int n;
	printf("Enter n :- ");
	scanf("%d",&n);
	int sum = 0;
	int temp;
	printf("Enter %d numbers seperated by space :- ", n);
	for(int i=0;i<n;i++) {
		scanf("%d",&temp);
		sum = sum + temp;
	}
	// average = total_sum / total_number
	float avg = sum / (temp + 0.0);
	printf("Sum is %d\n", sum);
	printf("Average is %.2f", avg);
}

/*

Output :- 
Enter n :- 3
Enter 3 numbers seperated by space :- 2 5 3
Sum is 10
Average is 3.33

 */