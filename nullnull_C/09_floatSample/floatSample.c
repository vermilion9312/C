#include <stdio.h>

int main(void)
{
	//�Ǽ� �ڷ� ������ �޸� ũ��(����Ʈ ����)�� ���
	printf("%d\n", sizeof(123.456F));
	printf("%d\n", sizeof(123.456));

	//float ������ �Ǽ� �������� ���
	printf("%f\n", 123.456F);	//float

	//double ������ �Ǽ� �������� ���
	printf("%f\n", 123.456);	//double
	printf("%lf\n", 123.456);	//long double
	printf("%g\n", 123.456);	//long double
	
	return 0;
}