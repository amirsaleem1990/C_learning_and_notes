#include <stdio.h> 




/*
// int length(char*);
char* reverse(char*);
main()
{
	// printf("%d", length("Computer"));
	printf("\n%s", reverse("Computer"));
}
char* reverse(char *p)
{
	int l,i;
	char t;
	for(l=0; *(p+l)!='\0'; l++);
	for(i=0;i<l/2;i++)
	{
		t = *(p+i);
		*(p+i) = *(p+l-1-i);
		*(p+l-1-i) = t;
	}
	return(p);
}

// int length(char *p)
// {
// 	int i;
// 	for(i=0;*(p+i)!= '\0';i++);
// 	return(i);
// }
*/















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
