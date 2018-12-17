maint()
{
	int x, *p, **q, ***r;
	x = 5;
	p = &x; // Level1 pointer, becouse it have one *, <p> me srif us variable ka address aa sakta h jo khud pointer na ho, not else.
	q = &p; // Level2 pointer, becouse it have Two *, <q> srif pointer of pointer ban sakta h, not else.
	r = &q; // Level3 pointer, becouse it have three *, <r> srif pointer of pointer of pointer ban sakta h, not else.  

	// we need to assign value in x<int> by using <q><level 2> pointer;
	**q = 7; // here first we evelvate <*q> which is <p> and than <*p> which is <x>.

	// we need to assign value in x<int> by using <r><level 3> pointer;
	***r = 7; // here first we evelvate <*r> which is <q>, than <*q> which is <*p>, than <*p> which is <x>

}
