#include <stdio.h>

int main(void)
{
	// ��ü ��쿡 ���� ���ݷ� ����� ���� �迭�� ���� �� ����
	double aRate[10] = {
		0.0, 0.1, 0.25,	// 1~3�� 0%, 10%, 25%
		0.5, 0.5,		// 4~5��
		0.6, 0.65,		// 6~7��
		0.8, 0.82, 0.97	// 8~10��
	};
	int nAge = 0, nFee = 1000;

	printf("���ǥ\n");
	for (int i = 1; i <= 10; ++i)
		printf("%d�� ��� : \t%d��\n",
			i,
			(int)(nFee * aRate[i - 1])
		);
	putchar('\n');

	printf("���̸� �Է��ϼ���. : ");
	scanf_s("%d", &nAge);
	if (nAge < 1)
		nAge = 1;
	else if (nAge > 10)
		nAge = 10;

	printf("�������: %d��\n",
		(int)(nFee * aRate[nAge - 1])
	);
	putchar('\n');
	return 0;
}