#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int decimal = 13;
    int binary[20] = {0,};

    int idx = 0;

    while (true)
    {
        binary[idx] = decimal % 2;
        decimal /= 2;

        if (decimal == 0) break;

        idx++;
    }

    for (int i = idx - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }

    return 0;
}

/*
2  13
    6 
*/