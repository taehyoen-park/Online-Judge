#include<stdio.h>

int main()
{
	int n,k,m,t,i,j,pnum,count = 0;
	int tperson[52] = { 0, };
	int partyp[52][52] = { 0, };
	
	scanf("%d %d",&n,&m); 
	count = m;
	
	scanf("%d",&t);//진실을 알고있는 사람의 수 
	for(i = 0; i < t; i++)
	{
		scanf("%d",&pnum);
		
		//진실을 알고있는 사람의 배열 
		tperson[pnum] = 1;//진실을 알고있는 사람의 번호수에 1을 대입  
	}
			
	for(i = 0; i < m; i++)
	{
		scanf("%d",&partyp[i][0]);//0행0열에 사람의 수를 입력한다. 
		for(j = 1; j <= partyp[i][0]; j++)//사람의 수만큼 사람의 번호를 입력한다. 
			scanf("%d",&partyp[i][j]);
	}
	

	for(t = 0; t < m; t++) 
	{
		for(i = 0; i < m; i++)
		{
			for(j = 1; j <= partyp[i][0]; j++)
			{
				if(tperson[partyp[i][j]] == 1)//파티내에 진실을 아는사람이 한명이라도 존재한다면 
				{
					for(k = 1; k <= partyp[i][0]; k++)
					{
						tperson[partyp[i][k]] = 1;//그 파티원들의 번호를 진실만 알고있는 사람의 배열에 추가한다.  
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
		if(partyp[i][0] == 0)// 파티에 참석하는 사람이 하나도 없으면  
			continue;
			
		for(j = 1; j <= partyp[i][0]; j++)
		{
			if(tperson[partyp[i][j]] == 1) //파티원중에 한명이라도 진실을 알고 있으면 count를 감소시킨다. 
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
