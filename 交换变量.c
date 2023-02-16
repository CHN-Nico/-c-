#include<stdio.h>

void swap(int *a,int *b){
	int i;
	i=*a;
	*a=*b;
	*b=i;
    printf("a的值是%d\nb的值是%d",*a,*b); 
	return; 
}

int main()
{int a,b; 
scanf("%d %d",&a,&b);
 swap(&a,&b);
 printf("\na的值是%d\nb的值是%d",a,b); 
 return 0;
 }
