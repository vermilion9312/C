#include <stdio.h>

int main(void)
{
	int aList[3][4] = { 0 };
	int i = 0, j = 0, nCounter = 0;

	// 3�� 4�� �迭�� �� ��Ҹ� ���������� 1�� �����ϴ� ī���ͷ� ä���.
	// �� ������ �ٱ��� �ݺ���
	for (i = 0; i < 3; ++i)
	{
		// �� ���� ��ü ���� ä��� ���� �ݺ���
		for (j = 0; j < 4; ++j) 
			aList[i][j] = ++nCounter;
	}

	for (i = 0; i < 3; ++i) 
	{
		for (j = 0; j < 4; ++j)
			printf("%d\t", aList[i][j]);
		putchar('\n');
	}
	return 0;
}