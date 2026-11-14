#include<stdio.h>
int main()
{
	FILE *p;
	char n[50];
	int a,t;
	p=fopen("jesu.txt","r");
	fseek(p,2,0);
	while(!feof(p))
	{
	//	if(a>=50)
		fscanf(p,"%s%d",n,&a);
		printf("\nName:%s\nMark:%d",n,a);
		t=a+t;
		if(a>=35)
			printf("\nPass!");
		else
			printf("\nFail!");
	}		
	printf("Total:%d",t);
fclose(p);
}
