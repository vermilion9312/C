#include <stdio.h>

int main(void)
{
	double dData = 123.456;
	printf("%f, %f\n", dData, -123.456);

	//�Ҽ��� 2��° �ڸ����� �ݿø��ϰ� 1�ڸ����� ���
	printf("%.1f\n", dData);
	//�Ҽ��� 3��° �ڸ����� �ݿø��ϰ� 2�ڸ����� ���
	printf("%.2f\n", dData);
	//�Ҽ��� 4��° �ڸ����� �ݿø��ϰ� 3�ڸ����� ���
	printf("%.3f\n", dData);

	printf("%8d\n", 123);
	//�Ҽ����� ������ 12�ڸ��� ���. ��, �Ҽ��� ���� 4��° �ڸ�����
	//�ݿø��ϰ� 3�ڸ����� ����Ѵ�.
	printf("%12.3f\n", dData);
	printf("%012.3f\n", dData);
	return 0;
}