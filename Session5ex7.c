#include<stdio.h>

int main(){

   int a, b, ucln;
   printf("Moi ban nhap vao mot so nguyen duong a: ");
   scanf("%d",&a);

   printf("Moi ban nhap vao mot so nguyen duong b ");
   scanf("%d",&b);

   for(int i = 1; i <= a && i<= b; i ++){
    if(a % i ==0 && b % i ==0){
        ucln = i;
    }
   }
   printf("Uoc chung lon nhat cua a va b la %d",ucln);

   return 0;
}