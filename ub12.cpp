#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i,j,k,n;
	printf("�п�J�A�Q�n�T���Ϊ���(�e)=");
	scanf("%d",&n);
	for(i=0;i<n;i++)// �ަ��
	{ 
		for(j=0;j<i;j++)//�ުŮ� 
		{
			printf(" ");
		}
		for(k=n-i;k>=1;k--)//�ެP�� 
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
