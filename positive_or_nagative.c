main()
{
	int x;
	clrscr();
	printf("Enter a number");
	scanf("%d ", &x);
	print("Your number is %s", x > 0 ? "Positive" : "Nagative");
	x > 0 ? printf("Positive") : printf("Nagative");
	getch();
}
