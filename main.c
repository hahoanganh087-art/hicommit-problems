#include <stdio.h>

int main() {
    float khoang_cach, gia_tri_don_hang;
    if (scanf("%f", &khoang_cach) || scanf("%f", &gia_tri_don_hang) 
    if (khoang_cach <= 0 || gia_tri_don_hang < 0) {
        printf("INVALID\n");
    } else if (gia_tri_don_hang >= 500000 && khoang_cach <= 15) {
        printf("0\n");
    } else {
        if (khoang_cach <= 5) {
            printf("15000\n");
        } else if (khoang_cach <= 15) {
            printf("25000\n");
        } else {
            printf("40000\n");
        }
    }
    return 0;
}