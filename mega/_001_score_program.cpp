#include <stdio.h>
#include <math.h>

int main(void)
{
	int kor, math, eng, total;
	float average;

	printf("����: ");
	scanf_s("%d", &kor);

	printf("����: ");
	scanf_s("%d", &math);

	printf("����: ");
	scanf_s("%d", &eng);

	printf("����: %d, ����: %d, ����: %d\n", kor, math, eng);

	total = kor + math + eng;
	average = total / 3.0;

	printf("����: %d\n", total);
	printf("���: %.1f\n", average);

	return 0;
}