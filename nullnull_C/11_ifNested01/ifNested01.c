#include <stdio.h>

int main(void)
{
    int nInput = 0, nSelect = 0;
    scanf_s("%d", &nInput);

    // 1�� �з�
    if (nInput <= 10)
    {
        // 2�� �з�
        if (nInput < 0)
            nSelect = 0;  // ��� 1
        else
            nSelect = 10;  // ��� 2
    }
    else
    {
        nSelect = 20;  // ��� 3
    }

    printf("%d\n", nSelect);
	return 0;
}