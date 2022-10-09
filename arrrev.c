#include<stdio.h>
int main()
{

    int i,j,arr[5],arr2[5];
    printf("Enter array element's:-\n");
    for(i=0;i<=4;i++)
        scanf("%d",&arr[i]);
    for(i=4,j=0;i>=0;i--,j++)
        arr2[j]=arr[i];
    printf("After reverse:-\n");
    for(j=0;j<=4;j++)
        printf("\n%d\n",arr2[j]);
}
