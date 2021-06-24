/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Lenovo
 */


#include <stdio.h>

int main() {
	int i,j;
	float a[2][2];
	float b[2][2];
	printf("Enter the elements of the 1st matrix:\n");

	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Enter a%d%d: ",i+1,j+1);
			fflush(stdout);
			fflush(stdin);
			scanf("%f",&a[i][j]);
		}
	}
	printf("Enter the elements of the 2nd matrix:\n");

	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Enter b%d%d: ",i+1,j+1);
			fflush(stdout);
			fflush(stdin);
			scanf("%f",&b[i][j]);
		}
	}
	printf("Sum Of Matrix:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%.1f\t",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
