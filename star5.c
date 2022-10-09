#include<stdio.h>
#include<conio.h>
 void star(int, int);
int main()
{

    int k,l;

    star(k,l); //Actual argument:call by value
}
    void star(int i,int j)//formal argument
    {
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=6-i)
                printf("*");
                else
                printf(" ");

        }
        printf("\n");
    }
    }

