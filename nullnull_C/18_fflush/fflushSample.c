#include <stdio.h>

int main(void)
{
	FILE * fp = stdin;
	printf("Input string: ");

	//����ڷκ��� '���ڿ�'�� �Է¹��� �� ù ���ڸ� �о�� ����Ѵ�.
	printf("getchar( ) - %c\n", getchar());

	//���ۿ� �����ִ� ������ ������ ���뿡 ���� ������ ����Ѵ�.
	//printf("[%d] %s", fp->_cnt, fp->_base);
	//printf("READ: %d\n", fp->_ptr - fp->_base);

	////�ٽ� �� ���ڸ� �о�� �� �޶��� ������ Ȯ���Ѵ�.
	//printf("\n\ngetchar( ) - %c\n", getchar());
	//printf("[%d] %s", fp->_cnt, fp->_base);
	//printf("READ: %d\n", fp->_ptr - fp->_base);

	////���� ����� ���۸� �ʱ�ȭ�� �� ����� Ȯ���Ѵ�.
	//fflush(fp);
	//printf("\n\nAfter flushing\n[%d] %s",
	//	fp->_cnt, fp->_base);
	//printf("READ: %d\n", fp->_ptr - fp->_base);
	return 0;
}