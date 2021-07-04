// add , subtract two matrix
#include<stdio.h>
int main() {
	int i,j,row_a,col_a,row_b,col_b;
	scanf("%d%d",&row_a,&col_a);
	int matrix_a[row_a][col_a];
	for(i=0;i<row_a;i++)
		for(j=0;j<col_a;j++)
			scanf("%d",&matrix_a[i][j]);
	scanf("%d%d",&row_b,&col_b);
	int matrix_b[row_b][col_b];
	for(i=0;i<row_b;i++)
		for(j=0;j<col_b;j++)
			scanf("%d",&matrix_b[i][j]);
	// for addition and subtraction they should have same number of row and col
	int matrix_add[row_a][col_a],matrix_sub[row_a][col_a];
	if(row_a != row_b || col_a != col_b) {
		printf("Addition or subtraction not possible.");
	} else {
		for(i=0;i<row_a;i++) 
			for(j=0;j<col_a;j++) {
				matrix_add[i][j] = matrix_a[i][j] + matrix_b[i][j];
				matrix_sub[i][j] = matrix_a[i][j] - matrix_b[i][j];
			}
		printf("Addition of Matrix :\n");
		for(i=0;i<row_a;i++) {
			for(j=0;j<col_a;j++) {
				printf("%d ",matrix_add[i][j]);
			}
			printf("\n");
		}
		printf("Subtraction of Matrix :\n");	
		for(i=0;i<row_a;i++) {
			for(j=0;j<col_a;j++) {
				printf("%d ",matrix_sub[i][j]);
			}
			printf("\n");
		}
	}	 				
}
