#include <stdio.h>
 
float faktorial(int n) {
    float hasil = 1;
    int i;
    for (i = 1; i <= n; i++) hasil *= i;
    return hasil;
}
 
float hitungE(int suku) {
    float e = 0;
    int i;
    for (i = 0; i < suku; i++) {
        e += 1.0 / faktorial(i);
    }
    return e;
}
 
int main() {
    printf("Perkiraan e dengan deret Taylor:\n");
    int n;
    for (n = 1; n <= 15; n++) {
        printf("n=%2d: e = %.10f\n", n, hitungE(n));
    }
    printf("Nilai asli: 2.7182818285\n");
    return 0;
}
