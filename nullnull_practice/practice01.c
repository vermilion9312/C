#include <stdio.h>

int main(void)
{
	int age = 0;
	char name[32] = { 0 };

	scanf_s("%d", &age);
	gets_s(name, sizeof(name));

	printf("����� ���̴� %d���̰� �̸��� %s �Դϴ�.", name, age);

	return 0;
}