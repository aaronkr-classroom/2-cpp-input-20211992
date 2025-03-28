#include <stdio.h>

int sum(int n) {
    if (n == 1) return 1;
    else return n + sum(n - 1);
}

double Rsum(int n) {
    if (n == 1) return 1.0;
    else return (1.0 / n) + Rsum(n - 1);
}

int main(void) {
    double R1result = 0;
    int R2result = 0;
    R1result = Rsum(5);
    R2result = sum(5);
    printf("합계: %lf\n", R1result);
    printf("합계: %d\n", R2result);

    return 0;
}