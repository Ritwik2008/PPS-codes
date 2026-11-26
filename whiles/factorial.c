#include <stdio.h>

int main(){
	int i = 1;
	int n,fact = 1;
	printf("Enter n: ");
	scanf("%d", &n);
	while (i<=n){
		fact *= i;
		i++;
	}
	printf("%d\n", fact);
	return 0;
}
