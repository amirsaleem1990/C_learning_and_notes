#include <stdio.h>
struct date
{
	int d,m,y;
};
void main()
{
	struct date today, d1, d2; // <today> and <d1>  and <d2> all are variables of type <date>
	today.d = 17;
	today.m = 12;
	today.y = 2018;
	printf("today:   %d/%d/%d\n", today.d, today.m, today.y);

	d1 = today;
	printf("\nd1\n%d/%d/%d\n",d1.d, d1.m, d1.y);

	printf("Enter today's date\n");
	scanf("%d/%d/%d", &d2.d, &d2.m, &d2.y); // since we use </> in <scanf> so user have to insert numbers sepreated by </>
	printf("%d/%d/%d\n", d2.d, d2.m, d2.y);
}

