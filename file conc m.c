#include<stdio.h>
int main()
{
	FILE *p;
	char n[50];
	int a;
	p=fopen("jesu.txt","r");
	while(!feof(p))
	{
		if(a>=50)
		{
		
		fscanf(p,"%s%d",n,&a);
		printf("\nName:%s\nMark:",n,a);
	}	}	
fclose(p);
}
