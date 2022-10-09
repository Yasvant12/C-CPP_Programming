#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,j,num,arr[10];
	//clrscr();
	printf("\nEnter the element in the array : ");
	scanf("%d",&n);
	printf("\nEnter the elements:");
	for(i=0;i<n;i++)
	scanf("%d", &arr[i]);
	printf("\nEnter the number to be deleted :");
	scanf("%d", &num);
	for(i=0;i<n;i++)
	{
		if(arr[i]==num)
		{
			for(j=i;j<n-1;j++)
			arr[j]=arr[j+1];
		}
	}
	printf("\nThe array after deletion is:");
	for(i=0;i<n-1;i++)
	printf("\t%d",arr[i]);
	getch();
	return 0;
}
