#include<conio.h>
#include<stdio.h>
int main()
{

    int fact=1,n,a;
    printf("Enter any number for factorial:-");
    scanf("%d",&n);
    a=n;
    while(n>=1)
    {

        fact=fact*n;
        n--;
    }
    printf("factorial of %d is= %d",a,fact);
    return 0;
}
