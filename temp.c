#include <stdio.h>

int main (void)
{
    int nAge = 0;
    int nPrice = 1000;
    
    scanf_s("%d", &nAge);

    if (nAge >= 20) printf("나이: %d, 최종요금: %d원", 20, nPrice);
    printf("나이: %d, 최종요금: %d원", nAge, nPrice);

    return 0;
}