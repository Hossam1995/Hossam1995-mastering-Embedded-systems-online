/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Lenovo
 */



#include <stdio.h>

int main() {
	int num,i;
	float arr[100],sum=0.0,average;
	printf("Enter the number of data: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&num);

	for(i=0;i<num;i++){
		printf("%d. Enter number: ",i);
		fflush(stdout);
		fflush(stdin);
		scanf("%f",&arr[i]);
	}

	for(i=0;i<num;i++){
		sum+=arr[i];

	}
	average=(sum/num);
	printf("Average= %.2f",average);
	return 0;
}
