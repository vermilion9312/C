#include <stdio.h>

int main(void)
{
	char szBuffer[32] = { 0 };
	int nLength = 0;

	// �̸��� �Է¹޾� �迭�� �����Ѵ�.
	printf("Input your name : ");
	gets_s(szBuffer, sizeof(szBuffer));

	// �迭�� ���ۺ��� '\0'�� ���� ������ ��� �������� �ѱ�� Ȯ���Ѵ�.
	while (szBuffer[nLength] != '\0')
		nLength++;

	// �̸��� ���ڿ��� ���̸� ����Ѵ�.
	printf("Your name is %s(%d).\n", szBuffer, nLength);
	return 0;
}