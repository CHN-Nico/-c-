#include<stdio.h>

    int main(){
    int n;
    int i;
    double sum=0.0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        while(i%2==0){
            sum-=1.0/i;
            goto exit;
        }
        sum+=1.0/i;
        exit:;
    }

    printf("f(%d)=%f",n,sum);


    return 0;    
    }