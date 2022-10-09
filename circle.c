#include<stdio.h>
#include<conio.h>
#define PI 3.14
void main()
{
    int r;
    float a;
    printf("Enter radius of circle:-\n");
    scanf("%d",&r);
    a=r*r*PI;
    printf("Area of circle is %f",a);
    getch();
}
