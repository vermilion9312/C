#include <stdio.h>

int main(void)
{
	int nIndex = 0;
	//���� ������ �ž� �ݺ��� ���� �� �ִ�.
	while (nIndex >= 0)
	{
		//1��ŭ �������ѵ� ������ 0���� ū �����.
		++nIndex;
	}

	//int�� ��� �ִ� ũ�⸦ �Ѿ�� ���� ū ������ �ǰ�
	//������ �������� ���ϰ� �ȴ�.
	printf("%d\n", nIndex);
	return 0;
}