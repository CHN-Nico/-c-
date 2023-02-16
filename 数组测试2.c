#include<stdio.h>

int main(){
	int j,i,k;
	int array[3][2][4]=
	{
	
	{	
	{1,2,3,1},
	{2,3,4,1}
	},
	{
	{4,5,6,1},
	{2,3,4,1}
	},
	{
	{33,22,11,1},
	{43,22,112,1},
	}
	};
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++){
			for(k=0;k<4;k++){
				printf("%d\t",array[i][j][k]);
			}
			printf("\n");
		}printf("\n");
	}
	return 0;
}