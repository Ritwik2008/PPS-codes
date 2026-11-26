#include <stdio.h>

int main(){
	printf("Eligibility Check\n");
	int age;
	printf("Enter your age: ");
	scanf("%d", &age);
	printf("\n");
	
	if (age>=18) {printf("You can vote!\n");}
	else {printf("You are too young to vote.\n");}
	
	return 0;
}
