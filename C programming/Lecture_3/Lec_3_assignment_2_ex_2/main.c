/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Lenovo
 */


#include<stdio.h>

int main(void){

	char x;
	printf("Enter an alphabet: ");
	fflush(stdout);
	scanf("%c",&x);

	/*switch(x){
	case 'a':
	case 'A':
	case 'e':
	case 'E':
	case 'i':
	case 'I':
	case 'u':
	case 'U':
	case 'o':
	case 'O':
		printf("%c is a vowel.",x);
		break;
	default :
		printf("%c is not a vowel.",x);
		break;
		}
	 */




	if(x=='a'||x=='A'||x=='e'||x=='E'||x=='i'||x=='I'||x=='u'||x=='U'||x=='o'||x=='O'){
		printf("%c is a vowel.",x);

	}


	else{
		printf("%c is not a vowel.",x);

	}
	return 0;
}
