#include <stdio.h>

//�� ���α׷� ��ü ��ɰ� ���õ� �ֿ� �ڷᱸ���� ���������� ���� �� ����
int g_aList[5] = { 0 };

//����ڷκ��� ���� �Է¹޾� �������� �迭�� �ʱ�ȭ�Ѵ�.
void InitList(void)
{
	int i = 0;
	for (i = 0; i < 5; ++i)
	{
		printf("������ �Է��ϼ���. : ");
		scanf_s("%d", &g_aList[i]);
	}
}

//�������� �迭�� ����� ���� �����ϴ� ���
//�ٸ� int[5] �迭�� ���������� ���Ѵ�!
void SortList(void)
{
	int i = 0, j = 0, nTmp = 0;
	for (i = 0; i < 4; ++i)
		for (j = i + 1; j < 5; ++j)
			if (g_aList[j] < g_aList[i])
			{
				nTmp = g_aList[j];
				g_aList[j] = g_aList[i];
				g_aList[i] = nTmp;
			}
}

//�������� �迭�� ��� ���� ���
void PrintList(void)
{
	int i = 0;
	for (i = 0; i < 5; ++i)
		printf("%d\t", g_aList[i]);
	putchar('\n');
}

//���α׷��� �帧
int main(void)
{
	InitList();
	SortList();
	PrintList();

	return 0;
}