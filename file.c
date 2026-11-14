#include<stdio.h>
int main()
{
	FILE *p;
	char s[100];
	//printf("Enter The String:");
	//fgets(s);
	p=fopen("file.dat","r");
	fgets(s,100,p);
	puts(s);
	//printf("File written Succesfully !");
	fclose(p);
}
