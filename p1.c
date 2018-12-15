#include <stdio.h>
void input(int *p)
{
	int i;
	printf("Enter your number");
	for (i=0; i<=4; i++)
		scanf("%d", p+i);
}
void display(int *p)
{
	int i;
	for (i=0; i<=4; i++)
		printf(" %d", *(p+i));
}
void sort( int *p)
{
	int round, t, i;
	for (round=1; round<=4; round ++)
	{
		for(i=0; i<=4-round; i++)
			if(*(p+i) > *(p+i+1))
		{
			t = *(p+i); // *p=i == a[i]
			*(p+i) = *(p+i+1);
			*(p+i+1) = t;
		}
	}
}
main()
{
	int a[5];
	input(a);
	display(a);
	sort(a);
	display(a);
}



















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
