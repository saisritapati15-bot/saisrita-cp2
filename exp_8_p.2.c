#include<stdio.h>
struct distance{
	int km,m,cm;
};
int main(){
	struct distance d[5];
	int i,maxindex = 0;
	for(i=0; i<5; i++){
	
	printf("enter km m cm : ");
	scanf("%d %d %d",&d[i].km,&d[i].m,&d[i].cm);
}
for (i=1; i<5; i++){
	if(d[i].km > d[maxindex].km)
	maxindex = i;
}
printf("longest distance\n : %d km %d m %d cm",d[maxindex].km,d[maxindex].m,d[maxindex].cm);
return 0;
}
