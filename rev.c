#include<stdio.h>
#include<conio.h>
void main()
{
    int x,y=0,r;
    printf("Enter a number's:-");
    scanf("%d",&x);
    while(x!=0)
    {
        r=x%10;
        y=y*10+r;
        x=x/10;
    }
    printf("The reverse number's is=%d",y);
    getch();
}
