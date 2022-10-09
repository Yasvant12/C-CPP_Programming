#include<stdio.h>
#include<conio.h>
int greater(int,int,int,int);
int main()
{
	int a,b,c,d,num;
	printf("enter numbers");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	num=greater(a,b,c,d);
}
int greater(int a,int b,int c,int d)
{
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
			printf("%d is greater",a);
			return(a);
	    	}
			else
		    {
		     printf("%d is greater",d);
		     return(d);
		    }

		}
		else
		{
			if(c>d)
			{
					printf("%d is greater",c);
					return(c);
			}

			else
			{
					printf("%d is greater",d);
					return(d);
			}

		}


	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
					printf("%d is greater",b);
					return(b);
			}

			else
		    {
				printf("%d is greater",c);
				return(c);
		    }

		}
		else
		{
				if(c>d)
			{
				printf("%d is greater",c);
				return(c);
			}

			else
		    {
				printf("%d is greater",d);
				return(d);
	     	}
		}




	}
}
