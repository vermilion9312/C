#include <stdio.h>

int main(void) {

	char ch = 0;

	while ((ch = getchar()) != '\n') {
		// nIndex ������ �����ǰ� �ʱ�ȭ �ȴ�.
		int nIndex = 0;
		printf("%02d\t%c\n", nIndex, ch);

		// ������ ���� ������Ű���� �������� �ҿ��� ����.
		++nIndex;

		// ���⼭ nIndex�� �Ҹ��ϰ� ������� �����̴�.
	}

	return 0;
}