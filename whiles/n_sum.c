#include <stdio.h>

int main(){
	int i = 0;
	int n,sum = 0;
	printf("Enter n: ");
	scanf("%d", &n);
	while (i<=n){
		sum+=i;
		i++;
	}
	printf("%d\n", sum);
	return 0;
}
