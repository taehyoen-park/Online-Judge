#include<stdio.h>

int main()
{
	int n,k,m,t,i,j,pnum,count = 0;
	int tperson[52] = { 0, };
	int partyp[52][52] = { 0, };
	
	scanf("%d %d",&n,&m); 
	count = m;
	
	scanf("%d",&t);//������ �˰��ִ� ����� �� 
	for(i = 0; i < t; i++)
	{
		scanf("%d",&pnum);
		
		//������ �˰��ִ� ����� �迭 
		tperson[pnum] = 1;//������ �˰��ִ� ����� ��ȣ���� 1�� ����  
	}
			
	for(i = 0; i < m; i++)
	{
		scanf("%d",&partyp[i][0]);//0��0���� ����� ���� �Է��Ѵ�. 
		for(j = 1; j <= partyp[i][0]; j++)//����� ����ŭ ����� ��ȣ�� �Է��Ѵ�. 
			scanf("%d",&partyp[i][j]);
	}
	

	for(t = 0; t < m; t++) 
	{
		for(i = 0; i < m; i++)
		{
			for(j = 1; j <= partyp[i][0]; j++)
			{
				if(tperson[partyp[i][j]] == 1)//��Ƽ���� ������ �ƴ»���� �Ѹ��̶� �����Ѵٸ� 
				{
					for(k = 1; k <= partyp[i][0]; k++)
					{
						tperson[partyp[i][k]] = 1;//�� ��Ƽ������ ��ȣ�� ���Ǹ� �˰��ִ� ����� �迭�� �߰��Ѵ�.  
					}
					break;
				}
				else
					continue;
			}
		}
	}

	
	for(i = 0; i < m; i++)
	{
		if(partyp[i][0] == 0)// ��Ƽ�� �����ϴ� ����� �ϳ��� ������  
			continue;
			
		for(j = 1; j <= partyp[i][0]; j++)
		{
			if(tperson[partyp[i][j]] == 1) //��Ƽ���߿� �Ѹ��̶� ������ �˰� ������ count�� ���ҽ�Ų��. 
			{
				count--;
				break;
			}
			else
				continue;
		}
	}
	
	printf("%d",count);

	return 0;
}
