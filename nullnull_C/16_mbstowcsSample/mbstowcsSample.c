#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//�����ڵ� ���ڿ� ����� �ʱ�ȭ
	wchar_t* pwszData = L"String";

	//MBCS ���ڿ��� ���� �� �ִ� �迭
	char szData[32];
	size_t nConverted = 0;

	//��ȯ�� ���ڿ��� ���̸� �˾Ƴ���.
	wcstombs_s(&nConverted, NULL, 0, pwszData, 32);
	printf("%zd\n", nConverted);

	//�����ڵ� ���ڿ��� MBCS ���ڿ��� ������ szData �����Ѵ�.
	wcstombs_s(&nConverted, szData, sizeof(szData), pwszData, 32);

	//��ȯ ����� ����Ѵ�.
	printf("%s (%zd)\n", szData, nConverted);

	return 0;
}