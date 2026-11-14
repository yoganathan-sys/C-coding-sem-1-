#include<stdio.h>
int main()
{
	FILE *p;
	char n[50];
	float s;
	p=fopen("jesu.txt","r");
	//printf("Enter Name,salary:");
	while(!feof(p))
	{
		fscanf(p,"%s%f",n,&s);
		printf("\nName:%s\nSalary:%0.2f",n,s);
	}		
fclose(p);
}
