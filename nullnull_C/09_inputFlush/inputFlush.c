#include <stdio.h>

int main(void)
{
    int age;
    char name[10] = { 0 };

    printf("���̸� �Է��ϼ���. : ");
    scanf_s("%d", &age);
    //scanf_s("%d%*c", &nAge);

    printf("�̸��� �Է��ϼ���. : ");
    // fgets() �Է��� �׳� �Ѿ�� ���� �ذ�
    fflush(stdin);  // Windows
    // fpurge(stdin);  // Linux, Unix
    fgets(name, sizeof(name), stdin);

    printf("����� ���̴� %d���̰�, �̸��� %s�Դϴ�.\n", age, name);

	return 0;
}