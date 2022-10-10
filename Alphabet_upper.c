#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
printf("\nEnter a char or number\n");
scanf("%c",&ch);
if(ch>='A' && ch<='Z')
printf("\n No is uppercase character");
if(ch>='a' && ch<='z')
printf("\n No is lowercase character");
if(ch>='0' && ch<='9')
    printf("\n It is Number");
getch();
}
