#include <stdio.h>

int main() {
  float dtb;
  int drl;
  scanf("%f",&dtb);
  scanf("%d",&drl);
  if (dtb >=9 && drl >=90)
    printf ("HOC_BONG_XUAT_SAC");
  else if((dtb >=8 && drl >=80)||( dtb >=9 && drl >=80))
        
         printf("HOC_BONG_GIOI");
  else if ((dtb >=7 && drl >=70)||(dtb >=8 && drl >=70)||(dtb >=9 && drl >=70))
    printf("HOC_BONG_KHA");
  else 
    printf("KHONG_DAT");
  

  
  return 0;
}