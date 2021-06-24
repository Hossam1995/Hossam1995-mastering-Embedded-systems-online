/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Lenovo
 */


#include <stdio.h>

int main(void){
	unsigned int factorial=1,i;
	signed int num;
	printf("enter an integer");
	fflush(stdout);
	scanf("%d",&num);

	if(num<0){
		printf("Error!!! Factorial of negative number doesn't exist.");

	}
	else{
		for(i=num;i>0;i--)

			factorial*=i;
	}
	printf("factorial= %d",factorial);


	return 0;
}
