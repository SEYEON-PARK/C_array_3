#include <stdio.h>

int main(void)
{
	int a[5];

	printf("지금부터 정수를 5개 입력할 겁니다.\n");

	for (int i = 0; i < 5; i++)
	{
		printf("정수를 하나만 입력하시오. : ");
		scanf_s("%d", &a[i]);
	}

	printf("입력하신 정수들은 ");

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", a[i]);
	}

	printf("입니다.\n");

	return 0;
	
}