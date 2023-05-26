#include<stdio.h>
void main()
{
	int a[20],square=0,i,n,rev=0,k;
	printf("Enter the size of an array :");
	scanf("%d",&n);
	printf("Enter the array elements :\n");
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d] element :",i);
		scanf("%d",&a[i]);
	}
	printf("Reverse of an each array elements are :\n");
	for(i=0;i<n;i++)
	{
		while(a[i]>0)
		{
			k=a[i]%10;
			a[i] = a[i]/10;
			rev = rev*10+k;
		}
		printf("%d ",rev);
		rev=0;
	}
}
	
