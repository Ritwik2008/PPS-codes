#include <stdio.h>

int main(){

	float a,b;
	char op;
	
	printf("Enter operator [+|-|*|/]: ");
	scanf("%c", &op);
	printf("Enter number A: ");
	scanf("%f", &a);
	printf("Enter number B: ");
	scanf("%f", &b);
	
	printf("\n[RESULT] %f %c %f = ",a,op,b);
	
	switch(op){
		case '+': printf("%f\n", a+b);break;
		case '-': printf("%f\n", a-b);break;
		case '*': printf("%f\n", a*b);break;
		case '/': if(b!=0) printf("%.2f\n",  a/b);
			else printf("Err\nCant Divide by a zero\n");break;
		default : printf("Err\nPlease enter a valid operator\n");
	}
	return 0;
}
