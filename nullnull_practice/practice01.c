#include <stdio.h>

int main(void)
{
	int nCount = 0;
	scanf_s("%d", &nCount);

	int i = 0;
	while (i < nCount)
	{
		putchar('*');
		i++;
	}
	putchar('\n');
	return 0;
}