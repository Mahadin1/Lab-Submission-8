#include<stdio.h>

int main(){
	int a,b;
	printf("please enter 2d array size:\n");
	printf("number of rows :");
	scanf("%d",&a);
	printf("please enter number of columns:");
	scanf("%d",&b);
	int array[a][b];
	int array2[b][a];
	printf("please enter 2d array elements\n");
	
	for(int i = 0;i < a;i++){
		for(int j = 0;j < b;j++){
			printf("Please enter element of array[%d][%d] : ",i,j);
			scanf("%d",&array[i][j]);
		}
		printf("\n");
	}
	printf("Orignal matrix \n");
	for(int i = 0;i < a;i++){
		for(int j = 0;j < b;j++){
			printf("%d \t",array[i][j]);
		}
		printf("\n");
	}

	for(int i = 0;i < b;i++){
		for(int j = 0;j < a;j++){
			array2[i][j] = array[j][i];

		}
		printf("\n");
	}
	printf("Transpose matrix \n");
		for(int i = 0;i < b;i++){
		for(int j = 0;j < a;j++){
			printf("%d \t",array2[i][j]);
		}
		printf("\n");
	}

	return 0;
}