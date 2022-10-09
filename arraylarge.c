#include<stdio.h>
int main()
{
	int i,arr[5],large,slarge,pos;
	//clrscr();
	printf("Enter elements:-\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	large=arr[0];
	pos=0;
	for(i=1;i<5;i++)
	{
		if(arr[i]>large)
		{
			large=arr[i];
			pos=i;
		}
	}
		slarge=arr[5-pos-1];
		for(i=0;i<5;i++)
		{
			if(i!=pos)
			{
				if(arr[i]>slarge)
				slarge=arr[i];
			}

		}
		printf("the largest of these numbers is: %d",large);
		printf("the second largest of these numbers is: %d",slarge);
}
