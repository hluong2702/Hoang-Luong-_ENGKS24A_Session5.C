#include<stdio.h>

int main(){

     int number = 10;
     int numBer;
    do{
     printf("Moi ban nhap vao mot so nguyen cho den khi trung thi dung lai ");
     scanf("%d",&numBer);
    }while (numBer != number);

    printf("Nhap dung roi");

    return 0;

}