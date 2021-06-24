
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
	printf("Enter a string: ");
	fflush(stdout);
	fflush(stdin);
	gets(st);

	for(int i=0;i<sizeof(st);i++){
		if(st[i]=='\0')break;
		else count++;
	}
	//strlen doesn't include the null character!
	printf("the length of the string: %d",count-1);




	return 0;
}
