#include<stdio.h>

int main()
{int x;
 int n=1;
 scanf("%d",&x);
 
 if(x>9999){
     printf("���������ֵ�����Ϲ淶"); 
 }
 if(x>999){
     n=4;
	 printf("x��λ���ǣ�%d\n",n);
 }else if(x>99){
     n=3;
	 printf("x��λ���ǣ�%d\n",n);
 }else if(x>9){
     n=2;
	 printf("x��λ���ǣ�%d\n",n);
 } else{
 	n=1;
    printf("x��λ���ǣ�%d\n",n);
 } 
 
 return 0;
}
