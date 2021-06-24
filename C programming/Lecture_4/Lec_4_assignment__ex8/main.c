/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Lenovo
 */

#include <stdio.h>
#include <string.h>

int main()
{

	char a[100],b[100];
	int count;

	printf("Enter the string: ");
	fflush(stdout);
	fflush(stdin);
	gets(a);
	count=strlen(a);
	for(int i=count;i<0;i++){
	putchar(a[i])
	}
	return 0;
}
