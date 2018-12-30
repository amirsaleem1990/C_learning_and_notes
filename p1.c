#include <stdio.h> 
#include <stdlib.h>
void main(){
	FILE *fp;
	char input[20];
	char file_name[20];
	printf("Enter you file name\n");
	scanf("%s", file_name);
	fp = fopen(file_name, "w");
	gets(input);
	fputs(input, fp);
	fclose(fp);
}













// #define ABS(a) (a) <0? -(a) :(a)
// void main()
// {
// 	printf("\nabs of -1 & 1:%d %d\n", ABS(-1), ABS(-1));
// };


// int fun(int);
// main()
// {
// 	int k=5;
// 	k = fun(k);
// 	printf("%d", k);
// }
// fun(a)
// {
// 	int s;
// 	if (a == 1)
// 		return (a);
// 	s = a + fun(a-1);
// 	return (s);
// }



// main()
// {
// 	void add(void);
// 	add();
// }
// void add()
// {
// 	int a,b,c;
// 	printf("Enter 2 numbers");
// 	scanf("%d%d", &a, &b);
// 	c = a+b;
// 	printf("Total %d", c);
// }


// void main()
// {
// 	int a,b;
// 	void add(int, int);
// 	printf("Enter 2 numbers");
// 	scanf("%d%d", &a, &b);
// 	add(a, b);
// }
// void add(int c, int d)
// {
// 	printf("Total %d", c + d);
// }
