#include <stdio.h>

int main(void)
{
	int nInput = 0, cnt = 0;

	printf("���ڸ� �Է��ϼ���. : ");
	scanf_s("%d", &nInput);

	if (nInput < 0)
		nInput = 1;
	else if (nInput > 9)
		nInput = 9;

	while (cnt < nInput)
	{
		putchar('*');
		cnt++;
	}

	return 0;
}