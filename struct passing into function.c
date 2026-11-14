//call by value
#include<stdio.h>
struct name
{
	int id;
	int sal;
};
int fun(struct name d)
{
	int a;
	//d.sal=1000;
	a=++d.sal;
	return a;
}
main()
{
	struct name d;
	printf("Enter Your Salary:");
	scanf("%d",&d.sal);
	fun(d);
	printf("\n%d",d.sal);
	printf("\n%d",fun(d));
}
