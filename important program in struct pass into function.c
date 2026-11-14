#include<stdio.h>
struct name
{
	int id;
	int sal;
};
struct name fun(struct name e)
{
	e.id=100;
	e.sal=1000;
	return e;
}
int main()
{
	struct name d,a;
	d.id=101;
	d.sal=200;
	a=fun(d);
	printf("First Id:%d",d.id);
	printf("\nFirst Sal:%d",d.sal);
	printf("\nAfter:%d",a);
	printf("\nAfter:%d",a.sal);
}
