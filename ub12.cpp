#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i,j,k,n;
	printf("請輸入你想要三角形的高(寬)=");
	scanf("%d",&n);
	for(i=0;i<n;i++)// 管行數
	{ 
		for(j=0;j<i;j++)//管空格 
		{
			printf(" ");
		}
		for(k=n-i;k>=1;k--)//管星號 
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
