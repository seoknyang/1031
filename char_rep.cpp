//반복 횟수를 입력 받고 아래의 동작을 반복하면 됩니다.
//문자를 하나 입력 받고 그 문자를 반복 출력할 횟수를 입력받으면 됩니다.
//ex:
//반복횟수입력:2
//문자와 횟수 입력 :A 3
//AAA
//문자와 횟수 입력: B 5
//BBBBB
#include<stdio.h>
int main()
{
	int i,j,top_rep, rep;
	char ch;
	printf("반복횟수입력:");
	scanf("%d",&top_rep);
	rewind(stdin);
	i=0;
	
	
	while(i<top_rep)
	{
		printf("문자와 횟수 입력:");
		
		scanf(" %c %d", &ch,&rep);
		j=0;
		while(j<rep)
		{
			printf("%c", ch);
			j++;
		}
		printf("\n");
		 
		i++;
	}
 } 
