#include<stdio.h>
#include<string.h>

/*
R : 한 칸 오른쪽으로
L : 한 칸 왼쪽으로
B : 한 칸 아래로
T : 한 칸 위로
RT : 오른쪽 위 대각선으로
LT : 왼쪽 위 대각선으로
RB : 오른쪽 아래 대각선으로
LB : 왼쪽 아래 대각선으로
*/

//체스판 좌표 A1에서 A는 열에 해당하고 1은 행에 해당이 된다. (배열과 순서가 반대) 
int main()
{
	int i,n;
	int kingx,kingy,stonex,stoney;
	char order[2],king[2],stone[2];
	
	scanf("%s %s %d",king,stone,&n); //king의 좌표,stone의 좌표,움직이는 횟수 
	
	//체스판 좌표(문자열)에서 행과 열을 정수좌표로 바꾼다. 
	kingy = king[1] - 48 - 1; //king의 행 
	kingx = king[0] - 65; //king의 열 
	stoney = stone[1] - 48 - 1; //stone의 행 
	stonex = stone[0] - 65; //stone의 열 
	
	for(i = 0; i < n; i++)
	{
		scanf("%s",order); //움직임 입력 
		if(strcmp(order,"R") == 0 && (kingx+1) <= 7){
			kingx++; //king을 움직임 
			if(kingx == stonex && kingy == stoney && stonex+1 <= 7) //king과stone이 좌표가 같고 stone이 좌표밖으로 나가지 않을때 
				stonex++;//king이 stone밀어서 움직인다 
			else if(kingx == stonex && kingy == stoney && stonex+1 > 7)//king과stone이 좌표가 같고 stone이 좌표밖으로 나갈때 
				kingx--;//움직였던 king을 다시 돌려놓는다 
			continue;
		}
		
		//동일한 방법으로 	
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
	
	//좌표를 출력하기 위해 다시 문자로 바꾼다. 
	king[1] = kingy + 48 + 1;
	king[0] = kingx + 65;
	stone[1] = stoney + 48 + 1;
	stone[0] = stonex + 65;
	
	//출력 
	printf("%c%c\n",king[0],king[1]);
	printf("%c%c\n",stone[0],stone[1]);
	
	return 0;
}
