#include<stdio.h>

int main()
{
	int h,m,s;
	int h1,m1,s1;
	int h_sum,m_sum,s_sum;
	
	scanf("%d:%d:%d",&h,&m,&s);
	scanf("%d:%d:%d",&h1,&m1,&s1);
	
	h_sum = h1-h;
	m_sum = m1-m;
	s_sum = s1-s;
	
	if(s_sum < 0)
	{
		s_sum = 60+s_sum;
		m_sum -= 1;
	}
	
	if(m_sum < 0)
	{
		m_sum = 60+m_sum;
		h_sum -= 1;
	}
	
	if(h_sum < 0)
		h_sum = 24+h_sum;
	
	printf("%02d:%02d:%02d",h_sum,m_sum,s_sum);
	
	return 0;
}
