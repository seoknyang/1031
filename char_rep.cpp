//�ݺ� Ƚ���� �Է� �ް� �Ʒ��� ������ �ݺ��ϸ� �˴ϴ�.
//���ڸ� �ϳ� �Է� �ް� �� ���ڸ� �ݺ� ����� Ƚ���� �Է¹����� �˴ϴ�.
//ex:
//�ݺ�Ƚ���Է�:2
//���ڿ� Ƚ�� �Է� :A 3
//AAA
//���ڿ� Ƚ�� �Է�: B 5
//BBBBB
#include<stdio.h>
int main()
{
	int i,j,top_rep, rep;
	char ch;
	printf("�ݺ�Ƚ���Է�:");
	scanf("%d",&top_rep);
	rewind(stdin);
	i=0;
	
	
	while(i<top_rep)
	{
		printf("���ڿ� Ƚ�� �Է�:");
		
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
