#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int i = 0;
	srand((unsigned)time(NULL));

	for (i = 0; i < 10; i++)
		printf("%6d\n", rand());

	for (i = 0; i < 10; i++)
		printf("%6d\n", rand() % 10);

	return 0;
}