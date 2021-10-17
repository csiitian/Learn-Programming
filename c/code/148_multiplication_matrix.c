// multiplication of two matrix
#include<stdio.h>
int main() {
	int i,j,k,row_a,col_a,row_b,col_b;
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
	int matrix_multi[row_a][col_b];
	// multiplication of two matrix is possible if one matrix's col and second matrix's row is equal
	if(col_a != row_b) {
		printf("Multiplication is not possible");
	} else {
		for(i=0;i<row_a;i++) {
			for(j=0;j<col_b;j++) {
				matrix_multi[i][j] = 0;
				for(k=0;k<col_a;k++) 
					matrix_multi[i][j] = matrix_multi[i][j] + matrix_a[i][k]*matrix_b[k][j];
			}
		}
		for(i=0;i<row_a;i++) {
			for(j=0;j<col_b;j++) 
				printf("%d ",matrix_multi[i][j]);
			printf("\n");
		}
	}			 
}
