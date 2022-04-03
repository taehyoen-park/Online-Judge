#include<stdio.h>

int main()
{
	int m,n,i,j,k,l;
	int	count = 0,tem1 = 0,tem2 = 0,result = 100,color = 0;
	char Chess[51][51];
	char First_color[4] = "BWB";
	
	//           세로 가로 
	scanf("%d %d",&m,&n);
	for(i = 0;i < m;i++)
		scanf("%s",Chess[i]);

	for(i = 0; i+7 < m;i++){
		for(j = 0; j+7 < n;j++){
			for(color = 0; color < 2;color++){
				for(l = i; l < i+8;l++){
					for(k = j; k < j+7;k+=2){
						if(l % 2 != 0)
						{
							if(Chess[l][k] != First_color[color])
								count++;
							if(Chess[l][k+1] != First_color[color+1])
								count++;
						}
						else
						{
							if(Chess[l][k] != First_color[color+1])
								count++;
							if(Chess[l][k+1] != First_color[color])
								count++;
						}
					}
				}
				if(color == 0)
					tem1 = count;
				else
					tem2 = count;
				count = 0;
			}
			if(tem1 > tem2)
			{
				if(result >= tem2)
					result = tem2;
				else
					continue;
			}
				
			else
			{
				if(result >= tem1)
					result = tem1;
				else
					continue;
			}
		}
	}
	
	printf("%d",result);
	return 0;
}
