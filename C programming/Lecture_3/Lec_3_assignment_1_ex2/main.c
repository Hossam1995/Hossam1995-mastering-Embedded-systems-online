/*
 * main.c
 *
 *  Created on: ??ş/??ş/????
 *      Author: Lenovo
 */
#include <stdio.h>

int main(void){
	//Enter an integer number then print it on screen
	int num;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d",&num);
	printf("You entered: %d",num);

	return 0;
}

