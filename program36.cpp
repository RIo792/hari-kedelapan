#include <stdio.h>
 
int nilaiRomawi(char c) {
    switch(c) {
        case 'I': return 1;   case 'V': return 5;
        case 'X': return 10;  case 'L': return 50;
        case 'C': return 100; case 'D': return 500;
        case 'M': return 1000;
    }
    return 0;
}
 
int romawiKeDesimal(char s[]) {
    int hasil = 0, i = 0;
    while (s[i] != '\0') {
        int curr = nilaiRomawi(s[i]);
        int next = nilaiRomawi(s[i + 1]);
        if (curr < next) hasil -= curr;
        else hasil += curr;
        i++;
    }
    return hasil;
}
 
int main() {
    printf("XIV    = %d\n", romawiKeDesimal("XIV"));
    printf("MCMXCIV = %d\n", romawiKeDesimal("MCMXCIV"));
    printf("MMXXIV = %d\n", romawiKeDesimal("MMXXIV"));
    return 0;
}
