#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

float add(float x, float y)
{
	float z=0;
	z = x+y;
	return z;
}
int main()
{
	float num1, num2;
	printf("���������ֵnum1��num2\n");
	scanf("%f%f", &num1, &num2);
	float sun = add(num1, num2);
	printf("\n�� = %f",sun);
	return 0;
}