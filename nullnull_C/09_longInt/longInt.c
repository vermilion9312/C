#include <stdio.h>

int main(void)
{
    // ��ȣ�� �ִ� 64��Ʈ ������ ���� ���� �� ����
    long long int lldData = 4294967295LL;

    // 64��Ʈ ������ 32��Ʈ ���� ���ڷ� ����Ѵ�.
    printf("%d\n", lldData);
    printf("%u\n", lldData);

    // 32��Ʈ�δ� ǥ���� �� ���� ������ ������ ����غ���.
    printf("%u\n", lldData + 1);
    printf("%u\n", lldData + 2);
    printf("%u\n", lldData + 3);

    // 64��Ʈ ������ 64��Ʈ ���� ����(%lld)�� ����Ѵ�.
    //%I64u
    printf("%lld\n", lldData + 1);
    printf("%lld\n", lldData + 2);
    printf("%lld\n", lldData + 3);
	return 0;
}