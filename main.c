#include <stdio.h>

int main() {
        float dtb;
        int drl,hl,rl;
  printf("nhap diem trung binh:",dtb);
  scanf("%f",&dtb);
  printf("nhap diem ren luyen:",drl);
  scanf("%d",&drl);
      if (dtb >=9)
        hl = 3;
  else if(dtb>= 8)
    hl = 2;
  else if(dtb >= 7)
    hl = 1;
  else 
    hl = 0;
  if (drl >=90)
     rl = 3;
  else if (drl >=80)
    rl = 2;
  else if (drl >=70)
    rl =1;
  else
    rl =0;
  if(hl==3 && rl==3)
    printf ("HOC_BONG_XUAT_SAC");
  else if((hl==2 && rl==3)||(hl ==3 && rl ==2))
        
         printf("HOC_BONG_GIOI");
  else if ((hl ==1 && rl ==1)||(hl ==2 && rl ==1)||(hl ==3 && rl ==1))
    printf("HOC-BONG-KHA");
  else 
    printf("KHONG_DAT");
  

  
  return 0;
}