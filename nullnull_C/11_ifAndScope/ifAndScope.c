#include <stdio.h>

int main(void)
{
	int nAge = 0;

	printf("���̸� �Է��ϼ���. : ");
	scanf_s("%d", &nAge);

	if (nAge >= 20)
	{
		printf("ó�� ��, ����� ���̴� %d�� �Դϴ�.\n", nAge);
		nAge = 20;
	}

	printf("����� ���̴� %d�� �Դϴ�.\n", nAge);
	return 0;
}