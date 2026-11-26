#include <stdio.h>

int main(){
	int r1,c1,r2,c2,j;

	float A[r1][c1], B[r2][c2], C[r1][c2];
	
	printf("\n\n XXX MATRIX A XXX --- \n\n");
	printf("Enter rows and columns: ");
	scanf("%d %d", &r1, &c1);
	
	
	for (int i=0;i<r1;i++){
		for (int j=0;j<c1;j++){
			printf("A[%d][%d]: ", i, j);
			scanf("%f", &A[i][j]);
			}
		printf("\n\n --- Row --- %d\n\n", i);
	}
	
	printf("\n\n XXX MATRIX B XXX --- \n\n");
	printf("Enter rows and columns: ");
	scanf("%d %d", &r2, &c2);
	

	for (int i=0;i<r2;i++){
		for (int j=0;j<c2;j++){
			printf("B[%d][%d]: ", i, j);
			scanf("%f", &B[i][j]);
			}
		printf("\n\n --- Row --- %d\n\n", i);
	}
	
	for (int i=0;i<r1;i++){
		for (int j=0;j<c2;j++){C[i][j] = 0;}
		for (int j=0;j<c2;j++){
			C[i][j] += A[i][j]*B[j][i];
			printf("%f ", C[i][j]);
			}
		printf("\n");
	}
	
	
	
	return 0;
}
