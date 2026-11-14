#include<stdio.h>
int main()
{
	FILE *p;
	char n[50];
	float s;
	p=fopen("jesu.txt","a");
	printf("Enter Name,salary:");
	scanf("%s%f",n,&s);
	fprintf(p,"%s %f",n,s);
	printf("\nFile Written Succesfully!");
}
