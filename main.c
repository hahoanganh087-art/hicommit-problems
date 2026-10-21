#include <stdio.h>
int main ()
{
	int a;
	printf ("nhap gia tri a la :");
	scanf ("%d",&a);
	
	printf ("%d la %s",a,(a%2==0?"CHAN":"LE"));
	
}