#include <stdio.h>

int main(void)
{
	int nInput = 0;			//1��
	scanf_s("%d", &nInput);

	if (nInput > 10)
	{
		int nInput = 20;	//2��
		printf("%d\n", nInput);

		if (nInput < 20)
		{
			int nInput = 30;//3��
			printf("%d\n", nInput);
		}
	}

	printf("%d\n", nInput);
	return 0;
}