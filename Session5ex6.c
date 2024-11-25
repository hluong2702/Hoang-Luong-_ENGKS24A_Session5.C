#include<stdio.h>
#include<stdlib.h>
int main(){
    int choice, a, b, sum, difference, product, quotient;
    printf("Moi ban nhap vao so thu nhat");
    scanf("%d",&a);

    printf("Moi ban nhap vao so thu hai");
    scanf("%d",&b);

     sum = a + b;
     difference = a - b;
     product = a * b;
     quotient = a / b;
    do
    {
        printf("1. Tổng 2 số\n");
        printf("2. Hiệu 2 số\n");
        printf("3. Tích 2 số\n");
        printf("4.Thương 2 số\n");
        printf("5.Thoat\n");
        printf("Lua chon cua ban : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Tong cua 2 so la %d \n",sum);
            break;
        case 2:
            printf("Hieu 2 so la %d\n",difference);
            break;
        case 3:
             printf("Tich 2 so la %d\n",product);
            break;
        case 4:
         printf("Thuong 2 so la %d\n",quotient );
            break;
        case 5:
            exit(0);        
        default:
            printf("Nhap khong hop le!");
            break;
        }
        printf("\n");
    } while (choice != 5);
    return 0;
}
