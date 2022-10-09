#include<Stdio.h>
int main()
{
	int size;
	int a[size],i;
	printf("Enter the size of array: ");
	scanf("%d",&size);
	printf("Enter %d Array Element:",size);
	for(i=0;i<size;i++)
	{
	scanf("%d",&a[i]);
}
	printf("\n display of the element of array\n");
	for(i=0;i<size;i++)
	printf("\n%d\t",a[i]);
	return 0;
}
