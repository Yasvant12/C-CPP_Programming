#include<stdio.h>
void main()
{
    int i,j,k=0;
    for(i=1;i<=3;i++)
    {
        for(j=i;j<=5;j++)
        {
            k=i+j+k;
        printf("i=%d j=%d k=%d ",i,j,k);
        }
        printf("\n");
    }
    printf("i=%d j=%d k=%d",i,j,k);

}


