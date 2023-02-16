#include<stdio.h>
#include<string.h>

void main()
{
	char text[]="Every dog has its day.";
	char word[]="dog";
	char *pfound=strstr(text,word);
	printf("%s",pfound);
		
}
