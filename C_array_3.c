#include <stdio.h>

int main(void)
{
	int a[5];

	printf("���ݺ��� ������ 5�� �Է��� �̴ϴ�.\n");

	for (int i = 0; i < 5; i++)
	{
		printf("������ �ϳ��� �Է��Ͻÿ�. : ");
		scanf_s("%d", &a[i]);
	}

	printf("�Է��Ͻ� �������� ");

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", a[i]);
	}

	printf("�Դϴ�.\n");

	return 0;
	
}