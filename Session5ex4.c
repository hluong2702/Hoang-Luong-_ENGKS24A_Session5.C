#include<stdio.h>

int main(){

    int n;

    printf("Moi ban nhap vao mot so nguyen 1-10 ");
    scanf("%d",&n);

    for(int i = 1;i <= 10;i ++){
    printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}