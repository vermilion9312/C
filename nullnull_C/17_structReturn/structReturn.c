#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct USERDATA
{
	int nAge;
	char szName[32];
	char szPhone[32];
} USERDATA;

USERDATA GetUserData(void)
{
	USERDATA user = { 0 };
	scanf_s("%d%*c", &user.nAge);

	gets_s(user.szName, sizeof(user.szName));
	gets_s(user.szPhone, sizeof(user.szPhone));
	return user;
}

int main(void)
{
	USERDATA user = { 0 };

	//�Լ��� ��ȯ�� ����ü�� �����ϰ� ���
	user = GetUserData();
	printf("%d��\t%s\t%s\n",
		user.nAge, user.szName, user.szPhone);

	return 0;
}