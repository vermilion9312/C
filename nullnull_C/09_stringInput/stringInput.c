#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // ���ڿ��� �����ϱ� ���� �迭 ���� �� ����
    char szBuffer[32] = { 0 };

    // ����ڰ� �Է��� ���ڿ��� �迭�� �����ϰ� ���
    scanf_s("%s", szBuffer, (unsigned)_countof(szBuffer));
    printf("%s\n", szBuffer);


    char szBufferLeft[32] = { 0 };
    char szBufferRight[32] = { 0 };

    scanf_s("%s%s",
        szBufferLeft, (unsigned)_countof(szBufferLeft),
        szBufferRight, (unsigned)_countof(szBufferRight));
    printf("%s %s \n", szBufferLeft, szBufferRight);
	return 0;
}