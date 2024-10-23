#include<stdio.h>
int main (){
	int array[2][3][3];
	printf("there is two page matrix of 3x3 \nPlease enter elements of matrix 1 \n");
	int sum1 = 0,sum2 = 0;
	
	for(int i = 0;i < 2;i++){
		for(int j = 0;j < 3;j++){
			for(int k  = 0;k < 3;k++){
					scanf("%d",&array[i][j][k]);

			}
				printf("\n");
		}
		printf("\nPlease enter elements of matrix %d \n", i+2);
	}
	for(int i = 0;i < 2;i++){
		for(int j = 0;j < 3;j++){
			for(int k  = 0;k < 3;k++){
				if(i ==  0){
					sum1 = sum1 + array[i][j][k];
				}else if(i = 1){
					sum2 = sum2 + array[i][j][k];
				}
			}
		}
	}
	
	printf("Sum of page 1 matrix is : %d \n",sum1);
	printf("Sum of page 2 matrix is : %d ",sum2);
	
	return 0;
}

