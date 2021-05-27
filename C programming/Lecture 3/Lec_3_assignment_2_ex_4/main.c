/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Lenovo
 */

#include <stdio.h>

int main(void){
	float num;
	printf("Enter a number:");
	fflush(stdout);
	scanf("%f",&num);
	if(num > 0.0){
		printf("%.2f is positive\n",num);
	}
	else if(num < 0.0){
		printf("%.2f is negative\n",num);
	}
	else{
		printf("You enterd a zero");
	}
	return 0;
}
