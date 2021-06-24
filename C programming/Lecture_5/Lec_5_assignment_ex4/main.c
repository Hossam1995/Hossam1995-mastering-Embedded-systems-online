/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Lenovo
 */
#include<stdio.h>

int power(int x,int y);
int main(){

	int x,y;
	printf("Enter base number: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&x);

	printf("Enter Power number (postive integer):");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&y);
    printf("%d^%d =%d",x,y,power(x,y));


	return 0;
}
int power(int x,int y){

	if(y==0){
		return 1;
	}
	else{
		return x*power9(x,y-1);
	}
}
