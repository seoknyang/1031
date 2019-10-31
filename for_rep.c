#include<stdio.h>
int main()
{
	int i,j,top_rep, rep;
	char ch;
	printf("반복횟수입력:");
	scanf("%d",&top_rep);
	rewind(stdin);
	
	
	
	for(i=0; i<top_rep; i++)
	{
		printf("문자와 횟수 입력:");
		
		scanf(" %c %d", &ch,&rep);
	
		for(j=0; j<rep; j++ )
		{
			printf("%c", ch);
			
		}
		printf("\n");
		 
		
	}
 } 
