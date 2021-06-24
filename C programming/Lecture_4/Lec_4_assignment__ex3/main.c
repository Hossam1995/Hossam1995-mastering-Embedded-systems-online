/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Lenovo
 */


#include <stdio.h>

int main(void){
	int a,b,i,j;
	int arr_1[10][10],arr_2[10][10];
	printf("Enter rows and coloumns of matrix: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d %d",&a,&b);

	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("Enter element a%d%d: ",i,j);
			fflush(stdout);
			fflush(stdin);
			scanf("%d",&arr_1[i][j]);
		}
	}
	printf("Enterd Matrix:\n");

	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("%d\t",arr_1[i][j]);
		}
		printf("\n");
	}
	printf("Transpose Of Matrix:\n");
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			arr_2[j][i]=arr_1[i][j];


		}}
	for(i=0;i<b;i++){
		for(j=0;j<a;j++){
			printf("%d\t",arr_2[i][j]);
		}
		printf("\n");

	}
	return 0;
}
