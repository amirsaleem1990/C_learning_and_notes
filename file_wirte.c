#include <string.h>
#include <stdio.h>
int main()
{
	int i;
	FILE *fp;
	char s[100]="this file is created by C shell";
	fp = fopen("f1.txt", "w");
	printf("Enter a string");
	fgets(s, 100, fp);
	for(i=0;i<strlen(s); i++)
	{
		fputc(s[i], fp);
	}
	fclose(fp);
}