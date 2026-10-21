#include <stdio.h>

int main()
{
    int a;
    printf("nhap gia tri a: "); 
    scanf("%d", &a);
    
    
    printf("%d la %s\n", a, (a % 2 == 0) ? "CHAN" : "LE");
    
    return 0;
}
