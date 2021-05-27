/*
  * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Lenovo
 */

#include <stdio.h>

int main(void){

	 int num;

	printf("Enter an integer you want to check:");
			fflush(stdout);
	scanf("%d",&num);

	if(num%2==0){
		printf("%d is Even",num);
	}
	else if(num%2==1){
		printf("%d is odd",num);
	}



	return 0;
}
