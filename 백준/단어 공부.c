#include<stdio.h>

int main()
{
    char str[1000000];
    int i,num[26] ={ 0 },max = 0;

    scanf("%s",str);//���ڿ� �Է� 

	//�ƽ�Ű�ڵ带 ����Ͽ� ���ĺ��� ���������� �迭�� �ִ´�. 
    for(i = 0;str[i] != '\0';i++)
    {
        if(str[i] > 90)
            num[str[i]-97]++;//�ҹ����� ��� 
        else
            num[str[i]-65]++;//�빮���� ��� 
    }

	//num�� �ε��� ���� ���� ū ���� �ε�����  max�� �ִ´�. 
    for(i = 0;i < 26;i++)
    {
        if(num[i] > num[max])
            max = i;
    }
    
    //max�� ����Ͽ� ��ġ�°� �ִ��� Ȯ���Ѵ�. 
    for(i = 0;i < 26;i++)
    {
        if(num[i] == num[max] && i != max)
        {
            printf("?");
            return 0;
    	}
    }
    
    printf("%c",max+65);

    return 0;

}
