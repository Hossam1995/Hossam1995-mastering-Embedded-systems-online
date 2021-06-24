/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Lenovo
 */
#include <stdio.h>

int main(void){
	int arr[100];
	int num,i,new,x;
	printf("Enter the number of elements:");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&num);

	for(i=0;i<num;i++){
		scanf("%d",&arr[i]);
	}

	printf("Enter the element to be inserted:");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&new);


	printf("Enter the location:");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&x);


	for(i=num;i>=x;i--){
		arr[i]=arr[i-1];


	}
	arr[x-1]=new;
	for(i=0;i<=num;i++){
		printf("%d\t",arr[i]);
	}
	return 0;
}




