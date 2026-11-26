#include <stdio.h>

int main(){
	int choice; 
	do {
		printf("\n1. Say Hi!\n2. Exit\n");
		printf("Enter choice: ");
		scanf("%d", &choice);
		if (choice == 1)
			printf("Hellooo!");		
	} while (choice!=2);
	return 0;
}
