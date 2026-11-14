#include<stdio.h>
int main()
{
	FILE *p;
	char n[50];
	//float s;
	int a;
	p=fopen("jesu.txt","a");
	printf("Enter Name,mark:");
	scanf("%s%d",n,&a);
	fprintf(p,"%s %d",n,a);
	printf("\nFile Written Succesfully!");
}
