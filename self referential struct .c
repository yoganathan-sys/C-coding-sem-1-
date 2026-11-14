#include<stdio.h>
struct yoga
{
	int a;
	char n[30];
	struct yoga *p;
}a,b;
int main()
{
	printf("Enter the Number:");
	scanf("%s%d",a.n,&a.a);
	printf("\nEnter The B numbers:");
	scanf("%s%d",b.n,&b.a);
	b.p=&a;
	printf("%s %d",b.p->n,b.p->n);
}
