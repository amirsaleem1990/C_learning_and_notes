#include <stdio.h>
gcc p1.c -o p
./p

----------------------------------------------
// if else
if (condition)
{statement};
else
{statement};

// if you have only one statement in if body then you can skip {}, same for else, so first statement after condition will considered as a statment ot that if or else
if (condition)
	statement;
else
	statement;
----------------------------------------------
// conditional operator (? : ) also called a Ternary operator, because it need 3 operands to do his work
// syntax: Condition ? statement1 : statement2
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
----------------------------------------------
// conditional operator also used in selective assignments,
x = a > b ? a : b 
// agar a > b to <x> me <a> daal do, else: <x> me <b> daal do
----------------------------------------------
// for loop
// syntax
// for loop ke parentheses me 3 argument compelsery hoty hen
// is ki execution u hoti he k pehly 1st argument chalta h, phir doosra, phir 3rd ko execute kary bager 
// he loop ki body execute hoti h, phir agli dafa pehly 3rd argument execute hota h, phir 2cnd,
// or phir loop ki body execute hoti h.
// Note: 1rst argument sab sy pehly or poory process me 1 hi dafa execute ho ga. 
main()
{
	int = i
	for (i=1; i<5; i++)
		{print('blablabla')}
}

----------------------------------------------
// NOTE: while and if else wagera ki conditions k bad <;> nahi lagayen gy warna error aay ga..

// wrong:
if (9 < 0);
{printf('blablabla')}

// ok
if (9 < 0)
{printf('blablabla')}
----------------------------------------------
break
// The keyword <break> can be used 	in loop body on in switch body.
----------------------------------------------
switch
// syntax
// nested if else sy bachny k lye switch use hota h, <expression> ka result jo ho ga, wo agar ksi
// constant sy mathc karta h to direct us constatnt ka code or us k baad waly sary constants k condes chal 
// jay ga, or agar ksi bhi constant sy <expression> match nahi ho rahi to <default> ka code chal jay ga,

switch(expression) // ye expression evalvate ho ka tru ya ya false nahi ho gi balky int ya char value ho gi 
{
	case constant1: code1;
	case constant2: code2;
	case constant3: code3;
	case constant4: code4;
	case constant5: code5;
	default: code6;
}
// Notes: 
// 1- har constant unique hona chahye.
// 2- constant srif int ye char ho sakty hen, real nahi ho sakty
// 3- code multiple lines k bhi ho sakty hen
// 4- agar ham srif wohi code chalana chahty hen jo <expression> sy match ho to har code k baad <break> 
// likhna ho ga.. 
// 5- <default> ko body me kahi bhi define kar sakty hen
// 6- har constant koi value hi ho gi, koi variable ya expression nahi use kar sakty
// 7- <expression> me aap variable ya constant dono use kar sakty hen

----------------------------------------------
function
// syntax
return_type function_name()
{
	function_Body
}

// example:
int add(a,b)
{return (a+b)}

char pr()
{return("hello")}
----------------------------------------------
main()
// main() Ko kahin bhi defina kar den code me is sy koi farq nahi parta, code me pehly mane() hi execute
// ho ga
----------------------------------------------
void
// agar function kuch return nahi kar raha to function define karty hwy us k names sy pehly <void> likhen gy
void a()
{printf("blablabla")}
----------------------------------------------
// function declearation
// example
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

----------------------------------------------
// function with arguments
main()
{
	int a,b;
	printf("Enter 2 numbers");
	scanf("%d%d", &a, &b);
	void add(int, int)
	add(a, b)
}
add(int c, int d)
{
	printf("Total %d", c + d)
}
----------------------------------------------
return
parentheses
// Notes:
// 1- if <return> contain value, or variable then we can remove parentheses, eg: <return b>, or <return 8>
// 2- if <return> contain expression then we have to use parentheses, eg: <return(9*7)> 
// 3- <return> return only one value, if we include more than one value in our <reuturn> statemnt then 
// we get last value in the parentheses, eg: we got <f> when we write <return(a,b,c,f)>

----------------------------------------------
function calling itself / also called Recurtion
int fun(int);
main()
{
	int k=5;
	k = fun(k);
	printf("%d", k);
}
fun(a)
{
	int s;
	if (a == 1)
		return (a);
	s = a + fun(a-1);
	return (s);
}
// Note: all problems solved with Recurtion can be solved with loops, but no vice versa
----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

----------------------------------------------

v