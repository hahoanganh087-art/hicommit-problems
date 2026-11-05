#include <stdio.h>

int main() {
int n;
  printf("nhap mot so nguyen",n);
  scanf("%d",&n);
  switch(n){
    case 1:
      printf("\nXEP_LOAI_XUAT_SAC");
      break;
    case 2:
      printf("\nXEP_LOAI_GIOI");
      break;
    case 3:
      printf("\nXEP_LOAI_KHA");
      break;
    case 4:
      printf("\nXEP_LOAI_TRUNG_BINH");
    default:
      printf("\nKHONG_HOP_LE");
      
  }

  return 0;
}