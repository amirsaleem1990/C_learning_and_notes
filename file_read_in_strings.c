#include <stdio.h> 
#include <stdlib.h>

void main()
{
	char str[10];
	char file_name[25];
	FILE *fp;
	printf("Enter file name\n");
	scanf("%s", file_name);
	fp = fopen(file_name, "r");
	if (fp==NULL)
	{
		printf("File Not Found\n");
		exit(1);
	}
	while(fgets(str, 10, fp) != NULL){
		printf("%s", str);
	}
	fclose(fp);
}