#include <stdio.h>

//�������� nInput�� ���� �� ����
int nInput = 100;

void TestFunc(void)
{
	//�������� nInput�� ���� ���
	printf("TestFunc( ) : %d\n", nInput);
}

int main(void)
{
	//���������ʹ� �ٸ� �������� nInput ���� ���� �� ����
	int nInput = 0;
	printf("%d\n", nInput);

	{
		//�������� �� �ռ� ������ nInput���� �ٸ� nInput ���� ���� �� ����
		int nInput = 20;
		printf("%d\n", nInput);
	}

	TestFunc();
	return 0;
}