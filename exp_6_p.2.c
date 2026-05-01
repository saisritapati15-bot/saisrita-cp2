#include<stdio.h>
void main()
{
	int *p;
	int arr[] = {7,73,23,8,9,18,37};
	int size = sizeof(arr)/sizeof(arr[0]);
	int *max = arr;
	 
	for(p= arr + 1;p < arr + size;p++)
	if(*p > *max)
	max = p;
	printf("max: %d\n",*max);
	
}
