#include <stdio.h>

int main() {
 int a, b, c;

    printf("Nhap ba so a, b, c: ");
    scanf("%d%d%d", &a, &b, &c);

    int max = a;

    if (b > max)
    {
        max = b;
    }

    if (c > max)
    {
        max = c;
    }

    printf("So lon nhat la: %d", max);

    return 0;
}