#include<stdio.h>

void string(int n,int a)
{
	int i;
	if(n == 0)
	{
		for(i = 0; i < a;i++)
			printf("____");
		printf("\"����Լ��� ������?\"\n");
		for(i = 0; i < a;i++)
			printf("____");
		printf("\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n");
		for(i = 0; i < a;i++)
			printf("____");
		printf("��� �亯�Ͽ���.\n");
		return string(n-1,a);
	}
		 
	
	else if(n > 0)
	{
		for(i = 0; i < a-n;i++)
			printf("____");
		printf("\"����Լ��� ������?\"\n");
		for(i = 0; i < a-n;i++)
			printf("____");
		printf("\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n");	
		for(i = 0; i < a-n;i++)
			printf("____");
		printf("���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n")	;	
		for(i = 0; i < a-n;i++)
			printf("____");		
		printf("���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n");
		
		return string(n-1,a);
	}
	
	else if(n < 0)
	{
		if(n == -a)
		{
			printf("��� �亯�Ͽ���.");
			return;
		}
			
		else
		{
			for(i = n; i > -a;i--)
				printf("____");
			printf("��� �亯�Ͽ���.\n");
			return string(n-1,a);	
		}	
	}
}

int main()
{
	int n,a;
	scanf("%d",&n);
	a = n;
	printf("��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n");
	string(n,a);
	
	return 0;
}
