#include<stdio.h>

void swap(int *a,int *b){
	int i;
	i=*a;
	*a=*b;
	*b=i;
    printf("a��ֵ��%d\nb��ֵ��%d",*a,*b); 
	return; 
}

int main()
{int a,b; 
scanf("%d %d",&a,&b);
 swap(&a,&b);
 printf("\na��ֵ��%d\nb��ֵ��%d",a,b); 
 return 0;
 }
