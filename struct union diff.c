#include<stdio.h>
struct i
{
	int n;
	char a[10];
	float b;
}t1;
union j
{
	int n;
	char a[10];
	float b;
}t2;
main()
{
	printf("Enter The Struct Values:");
	scanf("%d",&t1.n);
	printf("Enter The Unoin Values:");
	scanf("%d",&t2.n);
	t2.b=10.8;
	printf("\n%d %g",t2.n,t2.b);
	
}
