#include <stdio.h>

int main(void)
{
	int i = 0, j = 0;

	//5ȸ �ݺ��Ǵ� �ٱ��� �ݺ���
	for (i = 0; i < 5; ++i)
	{
		printf("i == %d\n", i);

		//5ȸ �ݺ� ������ ���� ���� �ݺ���
		for (j = 0; j < 5; ++j)
		{
			//break���� ����Ǹ� ���� �ݺ����� ��� ������.
			if (j > 2)		break;
			printf("\t%dth\n", j);
		}

		printf("end\n\n", i);
	}

	return 0;
}