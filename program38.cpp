#include <stdio.h>
 
void desimalKeOktal(int n, int hasil[], int *panjang) {
    int i = 0;
    if (n == 0) { hasil[0] = 0; *panjang = 1; return; }
    while (n > 0) {
        hasil[i++] = n % 8;
        n /= 8;
    }
    *panjang = i;
}
 
void cetakBalik(int arr[], int n) {
    int i;
    for (i = n - 1; i >= 0; i--) printf("%d", arr[i]);
    printf("\n");
}
 
int main() {
    int hasil[20], panjang;
    desimalKeOktal(255, hasil, &panjang);
    printf("255 dalam oktal = "); cetakBalik(hasil, panjang);
    desimalKeOktal(1024, hasil, &panjang);
    printf("1024 dalam oktal = "); cetakBalik(hasil, panjang);
    return 0;
}
