#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("%d\n", atoi("2147483647"));
	printf("%d\n", atoi("2147483648"));
	printf("%e\n", atof("1.7e+308"));
	printf("%e\n", atof("1.7e+309"));
	return 0;
}