#include <stdio.h>
#include <stdlib.h>

char* GetName(void)
{
	char* pszName = NULL;

	pszName = (char*)calloc(32, sizeof(char));
	printf("�̸��� �Է��ϼ��� : ");

	fgets(pszName, sizeof(char) * 32, stdin);
	return pszName;
}

int main(int argc, char* argv[])
{
	char* pszName = NULL;

	pszName = GetName();
	printf("����� �̸��� %s�Դϴ�.\n", pszName);

	free(pszName);
	return 0;
}