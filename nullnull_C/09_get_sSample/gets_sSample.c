#include <stdio.h>

int main(void)
{
    char szName[32] = { 0 };

    printf("�̸��� �Է��ϼ��� : ");

    // Windows: gets_s(szName, sizeof(szName));
    // Linux, UNIX : fgets(szName, sizeof(szName), stdin);
    fgets(szName, sizeof(szName), stdin);

    printf("����� �̸��� ");
    puts(szName);
    puts("�Դϴ�.");
	return 0;
}