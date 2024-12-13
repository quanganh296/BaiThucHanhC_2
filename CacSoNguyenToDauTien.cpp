#include <stdio.h>

int main() {
   int n;
   printf("Hay nhap mot so nguyen duong: ");
   scanf("%d",&n);
   	printf(" Cac so nguyen to dau tien den %d la:",n);
   for(int i=2;i<=n;i++)
   
   if(i>=2&&i%2!=0||i==2)
   {
   	printf(" %d",i);
   
	} 

    return 0;
}
