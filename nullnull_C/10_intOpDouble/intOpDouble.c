#include <stdio.h>

int main(void)
{
    int x = 10;

    // int * int -> %d
    printf("x * 10 = %d\n", x * 10);
    // int * double -> %d (��� �Ұ���)
    printf("x * 10.0 = %d\n", x * 10.0);

    // int / int�� int �����̴�. 
    // �Ǽ� ������ �ƴ϶�� ���� ����!
    // ��, �Ҽ��� ���ϴ� ����ȴ�.
    printf("x / 10 = %d\n", x / 10);

    // int / int�� int �����̹Ƿ� %f �� ����� �� ����.
    printf("(int) : 5 / 2 = %d\n", 5 / 2);
    // �Ҽ��� ���ϰ� ����ǹǷ� ��ǻ� ���� 2�� %f�� ����ϴ� ���̴�.
    printf("(double) : 5 / 2 = %f\n", 5 / 2);

    // double / int double �����̴�.
    printf("5.0 / 2 = %f\n", 5.0 / 2);
	return 0;
}