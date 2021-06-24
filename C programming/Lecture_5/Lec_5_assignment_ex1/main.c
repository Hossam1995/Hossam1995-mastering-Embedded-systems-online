/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Lenovo
 */


#include <stdio.h>

void print_prime(int,int);

int main(void){
	int x,y;
	printf("Enter two numbers (intervals):");
	fflush(stdin);
	fflush(stdout);
	scanf("%d%d,",&x,&y);
	print_prime(x,y);

	return 0;
}

void print_prime(int x,int y){


	int flag=0;
	printf("Prime numbers between %d and %d are: ",x,y);
	for(int i=x;i<=y;i++){
		for(int j=2;j<=(i/2);j++){

			if(i%j==0){
				flag=1;
				break;			}


		}
		if(flag==0)printf("%d ",i);
		flag=0;
	}}
