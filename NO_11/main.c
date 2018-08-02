#include <stdio.h>

int equal(double num1, double num2)
{
	if((num1 - num2 > -0.0000001) && (num1 - num2 < 0.0000001))
		return 1;
	else
		return 0;
}

double PowerWithUnsignedExponent(double base, unsigned int exponent)
{
	double result;
	if(exponent == 0)
		return 1;
	if(exponent == 1)
		return base;

	result =  PowerWithUnsignedExponent(base, exponent>>1);
	result *= result;
	if(exponent & 0x1 == 1)
		result *= base;

	return result;
}

double Power(double base, int exponent)
{
	unsigned int UnsignedExponent = (unsigned int)exponent;
	double result;
	//首先判断非法输入（0^负数）
	if(equal(base, 0.0) && (exponent < 0))
	{
		printf("Invalid input\n");
		return 0.0;
	}

	if(exponent < 0)
		UnsignedExponent = (unsigned int)(-exponent);

	result = PowerWithUnsignedExponent(base, UnsignedExponent);
	if(exponent < 0)
		result = 1.0 / result;

	return result;
}




int main(void)
{
	printf("%f\n", Power(1.0,-2));
}