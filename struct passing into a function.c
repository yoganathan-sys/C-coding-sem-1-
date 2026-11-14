#include<stdio.h>
struct emp
{
	int id;
	float sal;
};
void fun(struct emp e)
{
	printf("%d",e.id);
	e.sal=1000;
	printf("\n%d",e.sal);
}
main()
{
	struct emp e;
	e.id=20;
	e.sal=999;
	fun(e);
	printf("\n%d",e.sal);
}
