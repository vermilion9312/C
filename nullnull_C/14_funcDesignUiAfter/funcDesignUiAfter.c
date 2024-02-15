#include <stdio.h>

int GetFactorial(int nParam) {
	int nResult = 1, i = 0;

	if (nParam < 1 || nParam > 10)
		return 0;

	for (i = 1; i <= nParam; ++i)
		nResult *= i;
	return nResult;
}

int main(void) {

	int nResult = 0, nInput = 0;

	printf("����� ���� ����(1~10)�� �Է��ϼ���. : ");
	scanf_s("%d", &nInput);

	nResult = GetFactorial(nInput);
	if (nResult == 0) {
		puts("ERROR: 1~10������ ������ �Է��ϼ���.");
		return 0;
	}
	printf("Result: %d\n", nResult);
	return 0;
}