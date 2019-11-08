#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float a, b;
	printf("무게의 단위인 킬로그램(kg)을 소수로 입력하시오 : \n");
	scanf("%f", &a);
	b = 0.453592 / a;
	printf("%.3fpound 입니다. ", b);
}