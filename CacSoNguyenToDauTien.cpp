#include <stdio.h>
#include<math.h>

int main() {
   int n,count;
   printf("Hay nhap mot so nguyen duong: ");
   scanf("%d",&n);
   if(n<0){
   	printf("hay nhap lai mot so nguyen duong");
   	return 0;
   }
   printf(" cac so nguyen to dau tien la:");
   for(int i=2;i<=sqrt(count)&&i<=n;i++)
   if(count%i!=0||i==2)
   {
 
   
		printf(" %d",i);
	}

    return 0;
}
