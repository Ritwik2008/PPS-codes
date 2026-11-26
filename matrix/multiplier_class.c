#include <stdio.h>

int main(){
	int r,c,i,j;
	printf("Enter rows and columns: ");
	scanf("%d %d", &r, &c);
	
	float A[r][c], B[r][c], C[r][c];
	
	printf("\n\n XXX MATRIX A XXX --- %d\n\n", i);
	
	for (int i=0;i<r;i++){
		for (int j=0;j<c;j++){
			printf("A[%d][%d]: ", i, j);
			scanf("%f", &A[i][j]);
			}
		printf("\n\n --- Row --- %d\n\n", i);
	}
	
	printf("\n\n XXX MATRIX B XXX --- %d\n\n", i);

	for (int i=0;i<r;i++){
		for (int j=0;j<c;j++){
			printf("B[%d][%d]: ", i, j);
			scanf("%f", &B[i][j]);
			}
		printf("\n\n --- Row --- %d\n\n", i);
	}
	
	for (int i=0;i<r;i++){
		for (int j=0;j<c;j++){
			C[i][j] = A[i][j] + B[i][j];
			printf("%f ", C[i][j]);
			}
		printf("\n");
	}
	
	
	
	return 0;
}
