#include<stdio.h>
int main()
{
	FILE *p;
	char s[100];
	printf("Enter The String:");
	gets(s);
	p=fopen("file.dat","w");
	fputs(s,p);
	printf("File written Succesfully !");
	fclose(p);
}
