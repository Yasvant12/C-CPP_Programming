#include<stdio.h>
void prime();
int main()
{
//	int primec;

	prime();
//	printprime();
	void prime( )
	{
		int i,x;
		printf("Enter a number:-\n");
	scanf("%d",&x);

		for(i=2;i<=x-1;i++)
		if(x%2==0)
		break;
		if(x==i)
		printf("prime");
		else
		printf("not prime");

	}
	return 0;
}
