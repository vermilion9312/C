#include <stdio.h>
#include <math.h>

int main(void)
{
	int kor, math, eng, total;
	float average;
	float kor_deviation, math_deviation, eng_deviation;
	float kor_deviation_square, math_deviation_square, eng_deviation_square;
	float variance;

	printf("국어: ");
	scanf_s("%d", &kor);

	printf("수학: ");
	scanf_s("%d", &math);

	printf("영어: ");
	scanf_s("%d", &eng);

	printf("\n국어: %d, 수학: %d, 영어: %d\n", kor, math, eng);

	total = kor + math + eng;
	average = total / 3.0;

	printf("\n총점: %d\n", total);
	printf("평균: %.1f\n", average);

	kor_deviation = kor - average; // 국어 편차
	math_deviation = math - average; // 수학 편차
	eng_deviation = eng - average; // 영어 편차

	kor_deviation_square = kor_deviation * kor_deviation; // 국어 편차 제곱
	math_deviation_square = math_deviation * math_deviation; // 수학 편차 제곱
	eng_deviation_square = eng_deviation * eng_deviation; // 영어 편차 제곱

	variance = (kor_deviation_square + math_deviation_square + eng_deviation_square) / 3.0;
	// 분산 = (모든 과목 "편차 제곱" 더한 값) / 과목 수

	printf("\n국어 편차: %.1f, 수학 편차: %.1f, 영어 편차: %.1f\n", kor_deviation, math_deviation, eng_deviation);
	printf("\n분산: %.1f\n", variance);

	return 0;
}