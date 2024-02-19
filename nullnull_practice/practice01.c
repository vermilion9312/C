#include <stdio.h>

int main(void)
{
	int age = 0;
	char name[32] = { 0 };

	scanf_s("%d", &age);
	gets_s(name, sizeof(name));

	printf("당신의 나이는 %d살이고 이름은 %s 입니다.", name, age);

	return 0;
}