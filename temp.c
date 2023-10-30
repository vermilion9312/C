#include <stdio.h>

int main(void)
{
    int myArr[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < sizeof(myArr) / sizeof(int); i++)
    {
        printf("%d\n", myArr[i]);
    }

    return 0;
}