#include <stdio.h>
main()
{
	int a,b,c;
	printf("Enter any three numbers");
	scanf("%d%d%d", &a, &b, &c);
	printf("\nmax: %d\n", a>b?a>c?a:c:b>c?b:c);
	}