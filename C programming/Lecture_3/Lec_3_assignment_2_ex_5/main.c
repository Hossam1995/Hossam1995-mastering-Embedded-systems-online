/*
 * main.c
 *
 *  Created on: ??�/??�/????
 *      Author: Lenovo
 */

#include <stdio.h>

int main(void){

	char x;
	printf("Enter a character:");
	fflush(stdout);
	scanf("%c",&x);


	if( (x>='A' && x<='Z') || (x>='a' && x<='z') ){

		printf("%c is an alphabet",x);

	}
	else{
		printf("%c is not an alphabet",x);

	}


	return 0;
}
