#include<stdio.h>
int main()
{
    int arr[20],i,n,j,temp;
    printf("number of index::\n");
    scanf("%d",&n);
    printf("Enter element\n");
    for(i=0;i<=n-1;i++)
    {
     scanf("%d",&arr[i]);
    }
    for(i=0;i<=n-1;i++){
               for(j=i+1;j<=n-1;j++)
               {
                    if(arr[i]>arr[j])
                    {
                        temp=arr[i];
                         arr[i]=arr[j];
                         arr[j]=temp;
                         }
                    }
               }

    printf("after shorting");
    for(i=0;i<=n-1;i++)
        printf("%d",arr[i]);

}
