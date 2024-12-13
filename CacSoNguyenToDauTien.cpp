#include <stdio.h>
#include<math.h>

int main() {
   int n;
   printf("Hay nhap mot so nguyen duong: ");
   scanf("%d",&n);
   printf(" cac so nguyen to dau tien la:");
   int i=2;
   while(i<=n){
   
   if(i%2!=0||i==2)
   {
 	printf(" %d",i);
	}i++;
	}
    return 0;
}
