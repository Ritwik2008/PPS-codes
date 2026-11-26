#include <stdio.h>

int main(){

	int age = 20;
	if (age>=18){
		if (age >= 21)
			printf("Can Drink. \n");
		else
			printf("Can vote, not drink.\n");
	} else {
		printf("Not eligible to vote.\n");
	}
	return 0;
}
