/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Lenovo
 */
#include <stdio.h>


int main()
{
	char st[100];
	int count=0;
	char c;
	printf("Enter a string: ");
	fflush(stdout);
    fflush(stdin);
	gets(st);
	printf("Enter a char to find frequency: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%c",&c);
	for(int i=0;i<sizeof(st);i++){
		if(c==st[i]){
			count++;
		}
		else if(st[i]=='\0')
		{
			break;
		}

	}


	printf("Frequancy of %c is: %d",c,count);

	return 0;

}
