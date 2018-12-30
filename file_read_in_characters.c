void main()
{
	char ch;
	char file_name[30]; 
	FILE *fp;
	printf("Enter a File name for Opening in Reading\n");
	scanf("%s", &file_name);
	fp = fopen(file_name, "r");
	if (fp == NULL)
	{
		printf("\nFile not found\n");
		exit(1);
	}
	ch = fgetc(fp); // <fgetc> file ki pehli bite ka content (jo k charachter hota h) return karta h, or is k andar increment hota rehta h, isi wajah sy neechy loop me ham ny yehi function dubara call kya h 
	printf("*********************************************************\n");
	while(!feof(fp))
	{
		printf("%c", ch);
		ch= fgetc(fp);
	}
	printf("*********************************************************\n");
	fclose(fp);
}