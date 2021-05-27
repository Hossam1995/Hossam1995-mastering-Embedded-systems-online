/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Lenovo
 */
#include<stdio.h>


int main(void){

	char operator;
	float result,operand_1,operand_2;
	printf("Enter operator either + or - or * or divide :-");
	fflush(stdout);
	scanf("%c",&operator);

	printf("Enter two oprands: ");
	fflush(stdout);
	scanf("%f\n",&operand_1);
	scanf("%f\n",&operand_2);

	switch(operator){

	case '+':
		result=operand_1+operand_2;
		break;

	case '-':
		result=operand_1-operand_2;
		break;

	case '*':
		result=operand_1*operand_2;
		break;

	case '/':
		result=(operand_1/operand_2);
		break;

	}

	printf("%.2f %c %.2f= %.2f",operand_1,operator,operand_2,result);

	return 0;
}
