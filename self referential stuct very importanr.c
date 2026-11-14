//self referential struct
//first time pointer ku data
//main use of dsa linked list
#include<stdio.h>
#include<string.h>
struct yoga
{
	int m;
	char n[30];
	struct yoga *y;
}a,b,c;
main()
{
	printf("Enter The a Name and Mark:");
	scanf("%s%d",&a.n,&a.m);
	printf("Enter The b Name and Mark:");
	scanf("%s%d",&b.n,&b.m);
	b.y=&a,&c;
	c.m=20;
	b.y->m=200;
	strcpy(c.n,"yoga");// here c.n="yoga"->error
	printf("\nOwn Data:%s %d",b.n,b.m);
	printf("\n Referential Data:%s %d",b.y->n,b.y->m);
	printf("\n%d",a.m);
}
