#include<stdio.h>

int main(){
	int r1,r2,c1,c2,i,j,k;
	printf("Enter number of rows for matrix 1:");
	scanf("%d",&r1);
	printf("Enter number of columns for matrix 1:");
	scanf("%d",&c1);
	printf("Enter number of rows for matrix 2:");
	scanf("%d",&r2);
	printf("Enter number of columns for matrix 2:");
	scanf("%d",&c2);
	int arr[r1][c1];
	printf("Enter elements of matrix:");
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	int brr[r2][c2];
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			scanf("%d",&brr[i][j]);
		}
	}
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			printf("%d ",brr[i][j]);
		}
		printf("\n");}
		// i row of a[][] and j columns of b[][]
		//a[i][0],a[i][1],a[i][2].....
		//b[0][j],b[1][j],b[2][j].....
		int cr=c1;
		int result[r1][c2];
		for(i=0;i<r1;i++){
			for( j=0;j<c2;j++){
				result[i][j]=0;
			}
		}
		for(i=0;i<r1;i++){
			for(j=0;j<c2;j++){
				for(k=0;k<cr;k++){
					result[i][j]+=arr[i][k]*brr[k][j];
				}
				
			}
		}
		printf("Matrix multiplication:\n");
		for( i=0;i<r1;i++){
			for(j=0;j<c2;j++){
				printf("%d ",result[i][j]);	
			}
				printf("\n");
	}							
			}
