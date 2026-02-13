#include<stdio.h>
#include<string.h>
int  viper(char xyz[50]){
	int a;
	a = strlen(xyz);
	return a;
}
void main (){
	char def[100];
	printf("enter a string :");
	gets(def);
	printf("%d",viper(def));
}
