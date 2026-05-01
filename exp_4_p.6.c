#include <stdio.h>
#include<string.h>
struct book{
	char title[50];
	char author[25];
	float price;
};
int main()
{
	struct book books[10];
	int i;
	int numofbooks = 10;
	printf("enter details for ten books:\n");
	for(i=0;i< numofbooks;i++)
	 printf("\nEnter details for Book %d:\n", i + 1);
        printf("Enter title: ");
        scanf("%s", book[i].title);
		printf("enter author");
		scanf("%s",books[i].author);
		  printf("Enter price: ");
        scanf("%f", &books[i].price);	
}
printf("details of ten books:\n");
 for (i = 0; i < num_books; i++) {
        printf("\nBook %d:\n", i + 1);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Price: $%.2f\n", books[i].price);
        return 0;
    }
