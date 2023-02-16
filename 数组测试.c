#include<stdio.h>

int main()
{
	int i,count=3;
	int scores[10];
	long sum=0;
	float average=0.0;
	
	for(i=0;i<count;i++)
	{
		printf("%2u>:",i+1);
		scanf("%d",&scores[i]);
		sum+=scores[i];
	}
		average=(float)sum/count;
		printf("%.2lf",average);
	return 0;
	
}