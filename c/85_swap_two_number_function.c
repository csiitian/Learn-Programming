#include<stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
} 
int main() {
    int a,b;
    printf("Enter two numbers :- ");
    scanf("%d%d", &a, &b);
    printf("Before Swap :- ");
    printf("a = %d && b = %d\n", a, b);
    // swapping data
    swap(&a, &b); // call by reference
    printf("After Swap :- ");
    printf("a = %d && b = %d\n", a, b); 
}

/*

Output :- 
Enter two numbers :- 12 5
Before Swap :- a = 12 && b = 5
After Swap :- a = 5 && b = 12

*/