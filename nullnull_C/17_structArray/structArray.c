#include <stdio.h>

//����ü ���� �� �� �缱��
typedef struct USERDATA
{
	int nAge;
	char szName[32];
	char szPhone[32];
} USERDATA;

int main(void)
{
	//USERDATA ����ü �迭 ���� �� ����
	USERDATA userList[4] = {
		{ 10, "��ν�", "1234" },
		{ 11, "�̹���", "2345" },
		{ 17, "�����", "3456" },
		{ 12, "�����", "4567" }
	};

	int i = 0;

	//�迭 �������� �� USERDATA �ν��Ͻ��� ��� ���� ����Ѵ�.
	for (i = 0; i < 4; ++i)
		printf("%d��\t%s\t%s\n",

	userList[i].nAge, userList[i].szName,
		userList[i].szPhone);
	return 0;
}