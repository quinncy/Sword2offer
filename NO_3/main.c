#include <stdio.h>

int checkValue(int a[4][4], int value);

int main(void)
{
	int a[4][4] = {1, 2, 8, 9,
					2, 4, 9, 12,
					4, 7, 10, 13,
					6, 8, 11, 15};

	int checkIsRight;

	checkIsRight = checkValue(a, 7);

	printf("bool is %d\n", checkIsRight);

	return 0;
}

int checkValue(int a[4][4], int value)
{
	int i,j;
	int min_raw = 0;
	int min_line = 0;
	int max_raw = 3;
	int max_line = 3;
	//Ѱ�Ҿ���߽�
	for(i = max_raw; i >= min_raw; i--)
	{
		if(a[max_raw][min_line] > value)//���½�ֵ��value��
			max_raw--;
		if(a[max_raw][min_line] < value)
			min_line++;
		if(a[max_raw][min_line] == value)
			return 1;
	}

	for(j = max_line; j >= min_line; j--)
	{
		if(a[min_raw][max_line] > value)//������Ͻ�ֵ��value��
			max_line--;
		if(a[min_raw][max_line] < value)//������Ͻ�ֵ��valueС
			min_raw++;
		if(a[min_raw][max_line] == value)
			return 1;
	}

	if(max_line < min_line || max_raw < min_raw)
		return 0;

	for(i = min_raw; i < max_raw; i++)
	{
		for(j = min_line; j < max_line; j++)
		{
			if(a[i][j] == value )//�ж����½�ֵ
				return 1;
		}
	}

	return 0;
}

