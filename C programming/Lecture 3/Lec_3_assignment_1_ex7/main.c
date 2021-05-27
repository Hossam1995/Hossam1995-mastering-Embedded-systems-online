/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Lenovo
 */
#include <stdio.h>

int main(void){

	/*
	 * this method uses bitwise operators therefor we can't use it with real values
	 * because of the issues of precision
	 * 	 {
	 * 	    int a,b;
	 * 	    a=a^b;
	 * 	    b=a^b ;
	 * 	    a=a^b
	 *
	 */
	float a,b;
	printf("Enter the value of a:");
	fflush(stdout);
	scanf("%f",&a);
	printf("enter the value of b:");
	fflush(stdout);
	scanf("%f",&b);

//swapping
	a=a+b;
	b=a-b;
	a=a-b;

	printf("After swapping, value of a = %.2f\n",a);
	printf("After swapping, value of b = %.2\nf",b);



	return 0;
}
