#include <stdio.h>



�����
void make_identity_matrix(int N) {
    int A[N][N];  

     
    for (int k = 0; k < N; k++) {
        for (int i = 0; i < N; i++) {
            if (i == k) {
                A[k][i] = 1;  
            }
            else {
                A[k][i] = 0; 
            }
        }
    }

    printf("���� ��� A:\n");
    for (int k = 0; k < N; k++) {
        for (int i = 0; i < N; i++) {
            printf("%d ", A[k][i]);
        }
        printf("\n");
    }
}