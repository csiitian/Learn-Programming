// transpose of a matrix
#include<stdio.h>
int main() {
	int row,col;
	scanf("%d%d",&row,&col);
	int i,j,matrix[row][col];
	for(i=0;i<row;i++) 
		for(j=0;j<col;j++) 
			scanf("%d",&matrix[i][j]);
	// print actual matrix 
	printf("Actual Matrix :\n");
	for(i=0;i<row;i++) {
		for(j=0;j<col;j++) {
			printf("%d ",matrix[i][j]); // every col is space separeted
		}
		printf("\n"); // new line after every row
	}
	// get transpose of matrix		
	int transpose_matrix[col][row];
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			transpose_matrix[j][i] = matrix[i][j];
	// print transpose of matrix
	printf("Transpose of Matrix :\n"); 		
	for(i=0;i<col;i++) {
		for(j=0;j<row;j++) {
			printf("%d ",transpose_matrix[i][j]); // every col is space separeted
		}
		printf("\n"); // new line after every row
	}

}
