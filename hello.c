#include<stdio.h>

int main()
{
	char str[] = "Hello\0 world!!";
	char *s  = str;
	int ln = strlen(str);
	int i;
	for(i=0;i<ln;i++){
		printf("%c",*s++);
	}

	return 0;
}
