/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Lenovo
 */



#include <stdio.h>


int main(void){

	int a[100];
	int num,element;

	printf("Enter no of elements: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&num);
	for(int i=0;i<num;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the elements to be searched:");
	fflush(stdin);
	fflush(stdout);

	scanf("%d",&element);
	for(int i=0;i<num;i++){
		if(element==a[i]){
			printf("Number found at location: %d",i+1);
			break;
		}
		else{
			continue;
		}
	}


	return 0;
}
