#include <stdio.h>

int main(void)
{
	int nInput = 0;
	
	printf("������ �Է��ϼ���. : ");
	scanf_s("%d", &nInput);

	if (nInput >= 70)
		printf("�հ��Դϴ�.\n");
	else
		printf("���հ��Դϴ�.\n");
	return 0;
}