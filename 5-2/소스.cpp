#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float a, b;
	printf("������ ������ ų�α׷�(kg)�� �Ҽ��� �Է��Ͻÿ� : \n");
	scanf("%f", &a);
	b = 0.453592 / a;
	printf("%.3fpound �Դϴ�. ", b);
}