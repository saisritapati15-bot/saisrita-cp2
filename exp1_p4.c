#include<stdio.h>
#include<string.h>
void viper(char xyz[100]){
int a,i;
a=strlen(xyz);
for(i=0;i<a;i++)
{
	if(xyz[i]=='a'||xyz[i]=='e'||xyz[i]=='i'||xyz[i]=='o'||xyz[i]=='u'||xyz[i]=='A'||xyz[i]=='E'||xyz[i]=='I'||xyz[i]=='O'||xyz[i]=='U')
{
		printf("%c\n",xyz[i]);	}
}
}
int main (){
	char def[100];
	printf("enter a string :");
	gets(def);
    viper(def);
}
