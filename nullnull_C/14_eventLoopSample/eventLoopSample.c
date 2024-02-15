#include <stdio.h>
#include <stdlib.h>


int GetFee(int nAge)
{
    int nFee = 1000;
    if (nAge < 20) nFee /= 2;
    return nFee;
}

int PrintMenu(void)
{
    int nInput = 0;

    system("cls");
    printf("[1]New\t[2]Search\t[3]Print\t[4]Remove\t[0]Exit\n");
    scanf_s("%d", &nInput);
    return nInput;
}

int GetAge(void)
{
    int nAge = 0;
    printf("���̸� �Է��ϼ���. : ");
    scanf_s("%d", &nAge);
    return nAge;
}

int main(void)
{
    int nMenu = 0, nAge = 0;

    while ((nMenu = PrintMenu()) != 0)
    {
        if (nMenu == 1) {
            nAge = GetAge();
            printf("����� %d�� �Դϴ�.\n", GetFee(nAge));
            getchar();
        }
    }
    puts("Bye~!");
    return 0;
}

