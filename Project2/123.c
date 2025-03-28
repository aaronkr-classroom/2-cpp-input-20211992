
#include <stdio.h>

int sum(int n) {
    if (n == 1) return 1;
    else return n + sum(n - 1);
}

double Asum(int n) {
    if (n == 1) return 1.0;
    else return (1.0 / n) + Asum(n - 1);
}

int main(void) {
    double R1result = 0;
    int R2result = 0;
    R1result = Asum(5);
    R2result = sum(5);
    printf("합계: %lf\n", R1result);
    printf("합계: %d\n", R2result);

    return 0;
}