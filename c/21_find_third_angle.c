// find the third angle where first and second angle are given
#include<stdio.h>
int main() {
	int first_angle,second_angle;
	scanf("%d%d",&first_angle,&second_angle);
	int third_angle = 180 - (first_angle + second_angle);
	printf("Third angle is %d",third_angle);
}
