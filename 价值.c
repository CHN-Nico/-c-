#include<stdio.h>
int main()
{


float value;
float weight;
const transition=1700.0;

scanf("%f",&weight);

value=transition*weight*14.5833;
printf("%.2f.\n",value);
return 0;
}
