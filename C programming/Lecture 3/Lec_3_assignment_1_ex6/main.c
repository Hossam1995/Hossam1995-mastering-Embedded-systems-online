/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Lenovo
 */


/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Lenovo
 */


#include <stdio.h>

int main(void){

	/*swapping the vales of two variables using a temporary variable*/

	float a,b,temp;
    printf("Enter the value of a:")	;
    fflush(stdout);
    scanf("%f",&a);
	fflush(stdin);
	printf("enter the value of b:");
	fflush(stdout);
	scanf("%f",&b);

	//swaping
	temp=a+b;
	a=b;
	b=temp-a;

	printf("After swapping, value of a = %.2f\n",a);
	printf("After swapping, value of b = %.2f\n",b);

	return 0;
}
