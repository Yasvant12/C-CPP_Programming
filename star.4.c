#include<conio.h>
#include<stdio.h>
void main()
{
int i,j,k;
//k=1;
for(i=1;i<=5;i++)
{
for(j=5;j>=1;j--)
{
if(j>=i)
printf("* ");
else
printf(" ");
}
printf("\n");
}
}
