#include<stdio.h>

int main()
{
	char s[100],end;
	int k,i,j = 0,count = 0,num = 0,ocount[100] = { 0, };
	 
	gets(s);
	for(i = 0; s[i] >= 48 && s[i] <= 49; i++)
	{
		if(s[i] == 49)
			ocount[j] = 1;
			
		else if(s[i] == 48)
			j++;
			
		count++;
	}
	end = s[count-1];

	for(i = 0; s[i] >= 48 && s[i] <= 49; i++)
	{
		if(ocount[i] == 1)
			num++;
	}

	if(s[0] == '0' && end == '0')
		printf("%d",num);
	else if(s[0] == '1' && end == '1')
		printf("%d",num-1);
	else
		printf("%d",num);
	
	return 0;
}
