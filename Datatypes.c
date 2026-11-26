#include <stdio.h>

int main(){
	int i = 12;
	float f = 12;
	double d;
	char name[] = "Ritwik";
	
	printf("Variable i has value of %d and address %p\n", i, &i);
	printf("%d =/= %f\n",i,f );
	return 0;
}
