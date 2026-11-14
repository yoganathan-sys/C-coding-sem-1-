/*#include<stdio.h>
main()
{
FILE *fp; //File pointer decl;
char n[50];
float s;
fp=fopen("vijay.dat","w"); //File create and open in write
printf("Enter name, salary: ");
scanf("%s%f",&n,&s);
fprintf(fp,"%s %f",n,s); //data are written (stored) in data file
printf("\nFile written successful");
}*/
#include<stdio.h>
main() {
FILE *fp;
char n[20];
float s;
fp=fopen("vijay.dat","r");
fscanf(fp,"%s %f",n, &s);
printf("\n %s \n %f",n,s);
}
