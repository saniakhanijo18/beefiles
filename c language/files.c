#include<stdio.h>
int main(){
	FILE *fp;
	char ch;
	fp=fopen("while loop.c","r");
	while(1)
	{
		ch=fgetc(fp);
		if(ch==EOF)
		{
			break;
		}
		printf("%d",ch);
	}
}
