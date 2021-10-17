// find area of equilateral triangle
#include<stdio.h>
#include<math.h>
int main() {
	int side;
	scanf("%d",&side);
	float area = sqrt(3)*side*side/(4+0.0);
	printf("Area of side %d is %f",side,area);
}
