#include <stdio.h>
 
void buatIdentitas(int m[4][4], int n) {
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            m[i][j] = (i == j) ? 1 : 0;
}
 
int isIdentitas(int m[4][4], int n) {
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (m[i][j] != (i == j ? 1 : 0)) return 0;
    return 1;
}
 
void cetakMatriks(int m[4][4], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) printf("%3d", m[i][j]);
        printf("\n");
    }
}
 
int main() {
    int m[4][4];
    buatIdentitas(m, 4);
    printf("Matriks Identitas 4x4:\n");
    cetakMatriks(m, 4);
    printf("Apakah identitas? %s\n", isIdentitas(m, 4) ? "Ya" : "Tidak");
    return 0;
}

