#include <stdio.h>
#include <math.h>

int main(void)
{
	int kor, math, eng, total;
	float average;

	printf("국어: ");
	scanf_s("%d", &kor);

	printf("수학: ");
	scanf_s("%d", &math);

	printf("영어: ");
	scanf_s("%d", &eng);

	printf("국어: %d, 수학: %d, 영어: %d\n", kor, math, eng);

	total = kor + math + eng;
	average = total / 3.0;

	printf("총점: %d\n", total);
	printf("평균: %.1f\n", average);

	return 0;
}