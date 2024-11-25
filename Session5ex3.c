#include<stdio.h>

int main(){

    int number, sum;

    printf("Moi ban nhap vao mot so nguyen duong ");
    scanf("%d",&number);

    for(int i = 1;i <= 5;i++){
    sum += i;
    }
    printf("Tong la %d",sum);
   return 0;
}