/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Lenovo
 */

#include <stdio.h>


int main(void){

	int num,sum=0,i;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d",&num);

	for(i=1;i<=num;i++){

		sum+=i;

	}

	printf("sum= %d",sum);








	return 0;
}
