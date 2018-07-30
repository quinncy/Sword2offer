#include <stdio.h>
#include <string.h>


void replaceStr(char *a)
{
	char *p1;
	char *p2;
	int length1;
	int length2;
	int count = 0;
	int i = 0;
	while(*(a+i) != '\0')
	{
		if(*(a+i) == ' ')
			count++;

		i++;
	}

	length1 = strlen(a);
	length2 = length1 + 2 * count;
	p1 = a + length1;
	p2 = a + length2;

	while(p1 != p2)
	{
		if(*p1 == ' ')
		{
			*p2 = '0';
			*(p2 - 1) = '2';
			*(p2 - 2) = '%';
			p2 -= 3;
			p1--;
		}
		else
		{
			*p2 = *p1;
			p2--;
			p1--;
		}
	}
}


int main(void)
{
	char a[50]="We are happy!";
	printf("%d\n",strlen(a));
	replaceStr(a);
	puts(a);

	return 0;

}