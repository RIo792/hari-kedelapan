#include <stdio.h>
 
void segitigaPascal(int n) {
    int pascal[20][20] = {0};
    int i, j;
    for (i = 0; i < n; i++) {
        pascal[i][0] = 1;
        for (j = 1; j <= i; j++) {
            pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
        }
    }
    printf("Segitiga Pascal %d baris:\n", n);
    for (i = 0; i < n; i++) {
        for (j = n - i - 1; j > 0; j--) printf("  ");
        for (j = 0; j <= i; j++) printf("%4d", pascal[i][j]);
        printf("\n");
    }
}
 
int main() {
    segitigaPascal(8);
    return 0;
}
