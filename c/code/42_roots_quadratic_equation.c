// roots of a quadratic equations
#include<stdio.h>
#include<math.h>
int main() {
	int a,b,c;
	// a*x^2+b*x+c
	scanf("%d%d%d",&a,&b,&c);
	// find discriminent
	int disc = b*b - 4*a*c;
	// formula => (-b+sqrt(disc))/2a and (-b-sqrt(disc))/2a;
	if(disc < 0) {
		printf("Roots are imaginary");	
	} else if(disc == 0) {
		// two same real root
		printf("Root is : %f",((-b+sqrt(disc))/(2*a+0.0)));
	} else {
		// two different real root
		printf("Roots are : %f and %f",(-b+sqrt(disc))/(2*a+0.0),(-b-sqrt(disc))/(2*a+0.0));
	}
}
