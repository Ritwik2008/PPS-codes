#include <stdio.h>

int main(){
	int n = 3; 
	
	
	int A[n][3];
	A[0] = {1,2,3}
	int B[3][3] = {{3,1,7},{4,7,8},{0,5,5}};
	
	int C[3][3];
	
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			C[i][j] = A[i][j] + B[i][j];
			printf("%d ", C[i][j]);
			}
		printf("\n");
		}
	
	
	
	return 0;
}
