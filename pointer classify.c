#include<stdio.h>
int main()
{
	int a=10,b=20,c=30;
	int *p;
	p=&a;
	p=&b;
	p=&c;
	++*p;
	printf("%d",*p);
}
