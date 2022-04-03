#include<stdio.h>
#include<string.h>

/*
R : �� ĭ ����������
L : �� ĭ ��������
B : �� ĭ �Ʒ���
T : �� ĭ ����
RT : ������ �� �밢������
LT : ���� �� �밢������
RB : ������ �Ʒ� �밢������
LB : ���� �Ʒ� �밢������
*/

//ü���� ��ǥ A1���� A�� ���� �ش��ϰ� 1�� �࿡ �ش��� �ȴ�. (�迭�� ������ �ݴ�) 
int main()
{
	int i,n;
	int kingx,kingy,stonex,stoney;
	char order[2],king[2],stone[2];
	
	scanf("%s %s %d",king,stone,&n); //king�� ��ǥ,stone�� ��ǥ,�����̴� Ƚ�� 
	
	//ü���� ��ǥ(���ڿ�)���� ��� ���� ������ǥ�� �ٲ۴�. 
	kingy = king[1] - 48 - 1; //king�� �� 
	kingx = king[0] - 65; //king�� �� 
	stoney = stone[1] - 48 - 1; //stone�� �� 
	stonex = stone[0] - 65; //stone�� �� 
	
	for(i = 0; i < n; i++)
	{
		scanf("%s",order); //������ �Է� 
		if(strcmp(order,"R") == 0 && (kingx+1) <= 7){
			kingx++; //king�� ������ 
			if(kingx == stonex && kingy == stoney && stonex+1 <= 7) //king��stone�� ��ǥ�� ���� stone�� ��ǥ������ ������ ������ 
				stonex++;//king�� stone�о �����δ� 
			else if(kingx == stonex && kingy == stoney && stonex+1 > 7)//king��stone�� ��ǥ�� ���� stone�� ��ǥ������ ������ 
				kingx--;//�������� king�� �ٽ� �������´� 
			continue;
		}
		
		//������ ������� 	
		else if(strcmp(order,"L") == 0 && (kingx-1 >= 0)){
			kingx--;
			if(kingx == stonex && kingy == stoney && stonex-1 >= 0)
				stonex--;
			else if(kingx == stonex && kingy == stoney && stonex-1 < 0)
				kingx++;
		
			continue;
		}
		
		else if(strcmp(order,"B") == 0 && (kingy-1 >= 0)){
			kingy--;
			if(kingx == stonex && kingy == stoney && stoney-1 >= 0)
				stoney--;
			else if(kingx == stonex && kingy == stoney && stoney-1 < 0)
				kingy++;
			continue;
		}
		
		else if(strcmp(order,"T") == 0 && (kingy+1 <= 7)){
			kingy++;
			if(kingx == stonex && kingy == stoney && stoney+1 <= 7){
				stoney++;
			}
			else if(kingx == stonex && kingy == stoney && (stoney+1 > 7))
				kingy--;
			continue;
		}
		
		else if(strcmp(order,"RT") == 0 && (kingx+1 <= 7 && kingy+1 <= 7)){
			kingx++;
			kingy++;
			if(kingx == stonex && kingy == stoney && (stonex+1 <= 7 && stoney+1 <= 7))
			{
				stonex++;
				stoney++;
			}
			else if(kingx == stonex && kingy == stoney && ( stonex+1 > 7 || stoney+1 > 7))
			{
				kingy--;
				kingx--;
			}
			continue;
		}
		
		else if(strcmp(order,"LT") == 0 && (kingx-1 >= 0 && kingy+1 <= 7)){
			kingx--;
			kingy++;
			if(kingx == stonex && kingy == stoney && ( stonex-1 >= 0 && stoney+1 <= 7))
			{
				stonex--;
				stoney++;
			}
			else if(kingx == stonex && kingy == stoney && (stonex-1 < 0 || stoney+1 > 7))
			{
				kingy--;
				kingx++;
			}
			continue;
		}
		
		else if(strcmp(order,"RB") == 0 && (kingx+1 <= 7 && kingy-1 >= 0)){
			kingx++;
			kingy--;
			if(kingx == stonex && kingy == stoney && ( stonex+1 <= 7 && stoney-1 >= 0))
			{
				stonex++;
				stoney--;
			}
			else if(kingx == stonex && kingy == stoney && ( stonex+1 > 7 || stoney-1 < 0))
			{
				kingy++;
				kingx--;
			}

			continue;
		}
		
		else if(strcmp(order,"LB") == 0 && (kingx-1 >= 0 && kingy-1 >= 0)){
			kingx--;
			kingy--;
			if(kingx == stonex && kingy == stoney && (stonex-1 >= 0 && stoney-1 >= 0))
			{
				stonex--;
				stoney--;
			}
			else if(kingx == stonex && kingy == stoney && (stonex-1 < 0 || stoney-1 < 0))
			{
				kingy++;
				kingx++;
			}
			continue;
		}
		
	}
	
	//��ǥ�� ����ϱ� ���� �ٽ� ���ڷ� �ٲ۴�. 
	king[1] = kingy + 48 + 1;
	king[0] = kingx + 65;
	stone[1] = stoney + 48 + 1;
	stone[0] = stonex + 65;
	
	//��� 
	printf("%c%c\n",king[0],king[1]);
	printf("%c%c\n",stone[0],stone[1]);
	
	return 0;
}
