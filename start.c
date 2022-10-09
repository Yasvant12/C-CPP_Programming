#include<stdio.h>
#include<conio.h>
int main()
{

    int i,j,a;
    printf("enter any no");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
   {

        for(j=1;j<=i;j++)
        {
            // if(j<=i)
            printf("*");
          //  else
              //  printf(" ");
        }
        printf("\n");

    }
    return 0;
}
