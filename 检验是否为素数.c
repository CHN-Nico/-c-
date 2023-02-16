#include<stdio.h>
int main()
{
	int i,n;
	printf("input a number n:\n");
	scanf("%d",&n);
	
		for(i=2;i<n;i++)
	{
		if(n%i==0)
		{   printf("%d is divisible by %d\n",n,i);
			break;
		}else
		{
			printf("%d is prime!!\n",n);
			break;
		}
	}
	
	
	return 0;
}