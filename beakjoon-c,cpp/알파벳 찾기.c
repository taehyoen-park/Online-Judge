#include<stdio.h>

//¾ËÆÄºª Ã£±â
struct alphabet{
	char alph;
	int num;
};

int main()
{
	struct alphabet al[26];
	char v[100];
	int i,j;
	
	scanf("%s",v);
	
	for(i = 0; i < 26; i++)
	{
		al[i].alph = 'a' + i;
		al[i].num = -1;
	}
	
	for(i = 0; v[i]!=NULL ;i++)
	{
		for(j = 0; j < 26; j++)
		{
			if(v[i] == 'a'+ j && al[j].num == -1)
			{
				al[j].num = i;
				break;
			}
		}
	}
	
	for(i = 0; i < 26; i++)
	{
		printf("%d ",al[i].num);
	}
	
	return 0;
}
