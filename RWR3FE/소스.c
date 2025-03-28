#include <stdio.h>

int sum(int n)
{
    int result = 0;
    for (int i = 1; i <= n; i++)
    {
        result += i;
    }
    return result;
}

int main(void)
{
    int n = 5;
    int result = sum(n);
    printf("ÇÕ°è: %d\n", result);
    return 0;
}