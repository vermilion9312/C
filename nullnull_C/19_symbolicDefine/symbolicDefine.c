#include <stdio.h>

#define MAXLENGTH 32
#define CUTOFF	70

int main(void)
{
	char szName[MAXLENGTH] = { 0 };
	int nInput = 0;

	printf("������ �Է��ϼ���. : ");
	scanf_s("%d", &nInput);

	if (nInput >= CUTOFF)
		printf("�հ��Դϴ�.\n");
	else
		printf("���հ��Դϴ�.\n");
	return 0;
}