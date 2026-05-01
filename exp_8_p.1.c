#include<stdio.h>
	struct complex{
		int real;
		int imag;
		
	}; 
	void incrcomplex(struct complex *c){
		c-> real +=1;
		c->imag +=1;
		
	}
	int main(){
		struct complex c ={2,3};
		incrcomplex (&c);
		printf("after increment :%d + %d",c.real,c.imag);
		return 0;
		};
	


