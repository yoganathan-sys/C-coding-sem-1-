#include<stdio.h>
int main()
{
	FILE *fp;
	char a[50];
	float b;
	fp=fopen("yoga.dat","r");
	//printf("Enter The Name and salary:");
	//scanf("%s %f",&a,&b);
	fscanf(fp,"%s %f",&a,&b);
	printf("%s %d",a,b);
	//printf("\nFile successfully written");
}
