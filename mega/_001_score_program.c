#include <stdio.h>
#include <math.h>

int main(void)
{
	int kor, math, eng, total;
	float average;
	float kor_deviation, math_deviation, eng_deviation;
	float kor_deviation_square, math_deviation_square, eng_deviation_square;
	float variance;

	printf("����: ");
	scanf_s("%d", &kor);

	printf("����: ");
	scanf_s("%d", &math);

	printf("����: ");
	scanf_s("%d", &eng);

	printf("\n����: %d, ����: %d, ����: %d\n", kor, math, eng);

	total = kor + math + eng;
	average = total / 3.0;

	printf("\n����: %d\n", total);
	printf("���: %.1f\n", average);

	kor_deviation = kor - average; // ���� ����
	math_deviation = math - average; // ���� ����
	eng_deviation = eng - average; // ���� ����

	kor_deviation_square = kor_deviation * kor_deviation; // ���� ���� ����
	math_deviation_square = math_deviation * math_deviation; // ���� ���� ����
	eng_deviation_square = eng_deviation * eng_deviation; // ���� ���� ����

	variance = (kor_deviation_square + math_deviation_square + eng_deviation_square) / 3.0;
	// �л� = (��� ���� "���� ����" ���� ��) / ���� ��

	printf("\n���� ����: %.1f, ���� ����: %.1f, ���� ����: %.1f\n", kor_deviation, math_deviation, eng_deviation);
	printf("\n�л�: %.1f\n", variance);

	return 0;
}