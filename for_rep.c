#include<stdio.h>
int main()
{
	int i,j,top_rep, rep;
	char ch;
	printf("�ݺ�Ƚ���Է�:");
	scanf("%d",&top_rep);
	rewind(stdin);
	
	
	
	for(i=0; i<top_rep; i++)
	{
		printf("���ڿ� Ƚ�� �Է�:");
		
		scanf(" %c %d", &ch,&rep);
	
		for(j=0; j<rep; j++ )
		{
			printf("%c", ch);
			
		}
		printf("\n");
		 
		
	}
 } 
