#include <stdio.h>

int main(void)
{
	const int nCUTOFF = 70;
	int nInput = 0;

	printf("������ �Է��ϼ���. : ");
	scanf_s("%d", &nInput);

	if (nInput >= nCUTOFF)
		printf("�հ��Դϴ�.\n");
	else
		printf("���հ��Դϴ�.\n");
	return 0;
}