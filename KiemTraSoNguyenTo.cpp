#include <stdio.h>
#include<math.h>

int main() {
   int n,count;
   printf("Hay nhap mot so nguyen duong: ");
   scanf("%d",&n);
   
   for(int i=2;i<=sqrt(n);i++)
   
   if(n%i==0)
   {
   count++;
   }
   if(count==1&&n>1){
   	printf(" %d la so nguyen to",n);
   
	} 
	else 
	{
		printf(" %d khong la so nguyen to",n);
	}

    return 0;
}
