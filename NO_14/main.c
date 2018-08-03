#include <stdio.h>


void Reorder(int * pData, unsigned int length, int (*func)(int))
{
	int * pBegin = pData;
	int *pEnd = pData + length - 1;

	if(pData == NULL || length == 0)
		return;

	while(pBegin < pEnd)
	{
		while(pBegin < pEnd && !func(*pBegin))
			pBegin++;

		while(pBegin < pEnd && func(*pEnd))
			pEnd--;

		if(pBegin < pEnd)
		{
			int temp = *pBegin;
			*pBegin = *pEnd;
			*pEnd = temp;
		}
	}
}

int isEven(int n)
{
	return (int)((n & 1) == 0);
}

int main(void)
{
	int a[5] = {1,2,3,4,5};
	int i;
	Reorder(a,5,isEven);
	for(i = 0; i < 5; i++)
		printf("%d\n",a[i]);
}