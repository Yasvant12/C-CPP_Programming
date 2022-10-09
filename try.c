#include<stdio.h>
int main()
{

    int i,n,arr[50];
    printf("Enter the Elements:-\n");
    scanf("%d",&n);
    printf("Enter the Elements:-");
    for(i=0;i<=n;i++)
    {

        printf("\n Arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n The array elements are \n");
    for(i=0;i<=n;i++)
        printf("Arr[%d] = %d\t",i ,arr[i]);
    return 0;
}
