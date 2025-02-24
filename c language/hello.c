#include<stdio.h>
int main()
{
int i,j,k,r,c;
printf("enter no of rows:");
scanf("%d",&r);
printf("enter no of columns:");
scanf("%d",&c);
int arr[r][c];
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&arr[i][j]);
}
}
printf("Matrix is:\n");
for(i=0;i<r;i++){
	for(j=0;j<c;j++){
		printf("%d ",arr[i][j]);
	}printf("\n");
}
printf("transpose of matrix is:\n");
for(i=0;i<c;i++)
{
for(j=0;j<r;j++)
{
printf("%d ",arr[j][i]);
}
printf("\n");
}
}
