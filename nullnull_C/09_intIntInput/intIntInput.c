#include <stdio.h>

int main(void)
{
    int x = 0, y = 0;

    printf("�� ������ �Է��ϼ��� : ");
    // %d�� %d ���̿� ������ ���ٴ� ���� ����
    scanf_s("%d%d", &x, &y);

    printf("�� ���� ���� %d �Դϴ�. \n", x + y);

    //char ch = 0;
    //printf("������ ���ڸ� �Է��� �ּ��� : ");
    //scanf_s("%d%c", &x, &ch, 1);
    //printf("�Է��� ���� %d�̰�, ���ڴ� %c �Դϴ�. \n", x, ch);
	return 0;
}