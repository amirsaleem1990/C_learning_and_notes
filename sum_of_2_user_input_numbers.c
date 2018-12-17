#include <stdio.h>
main()
{
	void add(void); // 1st <void> ka matlab h k func koi value return nahi kar raha, or 2cnd ka ye k 
					// func koi arguments nahi ly raha	
	add();
}
void add()
{
	int a,b,c;
	printf("Enter 2 numbers");
	scanf("%d%d", &a, &b);
	c = a+b;
	printf("Total %d", c);
}
