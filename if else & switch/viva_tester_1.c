#include <stdio.h>
#include <string.h>

int main(){
	char sen[30];
	int len;
	printf("Enter letter: ");
	scanf("%s",sen);
	
	// len = strlen(sen);
	printf("Length = %d\n", len);
	
	for (int i = 0; i<len; i++){
		if (sen[i] !=sen[len-i-1]){
			// printf("%c != %c, (%d, %d)\n", sen[i], sen[len-i-1], i, len-i-1);
			printf("%s is not a palendrome!\n", sen);
			return 0;
		}
	
	}
	printf("%s is a palendrome!\n", sen);
	return 0;
}
