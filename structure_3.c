#include <stdio.h> 
struct book
{
	int bookid;
	char title[20];
	float price;
};
struct book input()
{
	struct book b;
	printf("Enter book id, title and price\n");
	scanf("%d", &b.bookid);
	fflush(stdin);
	scanf("%s%f", &b.title, &b.price);
	return(b);
}
void display(struct book bb)
{
	printf("\nid: %d \ntitle:%s \nprice:%f\n", bb.bookid, bb.title, bb.price);
}
void main()
{
	struct book b1;
	b1 = input();
	display(b1);
}
