#include <stdio.h>
#include<string.h>
int main(void) {
	char str[100],k;
	int i;
	printf(" Enter string: ");
	scanf("%s",str);
	printf(" search key: ");
	scanf(" %c",&k);
	for(i=0;i<strlen(str)&&str[i]!=k;++i);
	if(i<strlen(str))

		printf("Charecter found");
	else

		printf("Charecter not found");

	return 0;
}

