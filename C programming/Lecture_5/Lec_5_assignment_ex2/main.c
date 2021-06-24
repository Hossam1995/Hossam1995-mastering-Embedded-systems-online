/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Lenovo
 */


#include <stdio.h>
int factorial(int);
int main(void){
	int x ;
	printf("print a positive integer: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&x);
	printf("factorial of %d is: %d",x,factorial(x));


	return 0;
}

int factorial(int x){

	if(x==0){
		return 1;

	}

		return x*factorial(x-1);



}
