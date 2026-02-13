#include<stdio.h>
#include<string.h>
void viper (char abc[]){
	int a,i;
	a = strlen(abc);
	for(i=0; i<a; i++)

	{
		if(abc[i]==' ')
	{
	
			abc[i]='-';
	}
	}

printf("%s",abc);
}
void main(){
	char def[100];
	printf("enter a string :");
	gets(def);
	viper(def);
} 
