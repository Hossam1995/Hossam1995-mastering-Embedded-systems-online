/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Lenovo
 */
#include <stdio.h>

int main(void){

	float x,y,z;

	printf("enter three numbers:");
	fflush(stdout);
	scanf("%f%f%f",&x,&y,&z);

	if(x>y && x>z){
		printf("largest number: %.2f",x);
	}
	else if(y>z){
		printf("largest number: %.2f",y);
	}
	else{
		printf("largest number: %.2f",z);
	}

	return 0;
}

