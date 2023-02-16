#include<stdio.h>

int main()
{int x;
 int n=1;
 scanf("%d",&x);
 
 if(x>9999){
     printf("您输入的数值不符合规范"); 
 }
 if(x>999){
     n=4;
	 printf("x的位数是：%d\n",n);
 }else if(x>99){
     n=3;
	 printf("x的位数是：%d\n",n);
 }else if(x>9){
     n=2;
	 printf("x的位数是：%d\n",n);
 } else{
 	n=1;
    printf("x的位数是：%d\n",n);
 } 
 
 return 0;
}
