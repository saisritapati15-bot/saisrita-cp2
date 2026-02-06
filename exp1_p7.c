#include<stdio.h>
#include<string.h>
void viper (char xyz[]){
	int a, i, count = 0;
	char c;
	printf("enter tha char you want to find :");
	scanf("%c",&c);
	a = strlen(xyz);
	for(i=0;i<a;i++){
		if(xyz[i]== c){
			count++;
		}
	}
	return count++;
}
void main(){
	char abc[100];
	printf("enter a string :");
	gets(abc);
	printf("the number of times this char was found in the string is %d",viper (abC));
}
