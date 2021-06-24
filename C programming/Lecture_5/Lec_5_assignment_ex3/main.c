/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Lenovo
 */
#include <stdio.h>

void print_reverse(char*);
int main(void){

char x[100];
printf("Enter a sentence:");
fflush(stdout);
fflush(stdin);
gets(x);

print_reverse(x);
	return 0;
}

void print_reverse(char*x){

	if(*x=='\0'){
	return;
	}
	else if(x!='\0'){
		print_reverse(x+1);
		printf("%c",*x);
	}



}
