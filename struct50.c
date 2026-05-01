#include<stdio.h>
#include<stdlib.h>
void main(){
		char ch;
		FILE *fptr=fopen("struct50.c","r");
	if(fptr==NULL)
	{
		printf("file not found ");
		return 1;
	}
	else
	{
		while(fgets(fptr)!=EOF)
		{
			ch = getc(fptr);
			printf("%c",ch)
		}
		fclose(fptr);
		
	}
	return 0;
}								
