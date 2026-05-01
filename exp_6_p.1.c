#include<stdio.h>
void main()
{
	int arr[50],n,i;
	int *ptr;
	
	printf("enetr the number of elements in a array");
	scanf("%d",&n);
	printf("enter %d integer:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	ptr = arr;
	printf("\narray element using pointer :");
	for(i=0;i<n;i++){
		printf("element %d: %d\n",i,*ptr + i);
	}
	
}
