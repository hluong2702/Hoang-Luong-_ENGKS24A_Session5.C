#include<stdio.h>
#include<stdlib.h>
int main(){
    int choice;
    float a,b,c;

    do
    {
        printf("1. Nhập 3 số\n");
        printf("2. Tổng 3 số\n");
        printf("3. Trung bình cộng 3 số\n");
        printf("4.Số nhỏ nhất\n");
        printf("5.Số lớn nhất\n");
        printf("6.Thoat\n");
        printf("\n");
        printf("Lua chon cua ban : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Nhập số a");
            scanf("%f",&a);

            printf("Nhập số b");
            scanf("%f",&b);

            printf("Nhập số c");
            scanf("%f",&c);
            break;
        case 2:
            printf("Tổng 3 số %.0f\n",a+b+c);
            break;
        case 3:
             printf("Trung nình cộng ba số %f\n",(a+b+c)/3);
            break;
        case 4:
        if(a<b && a<c){
            printf("Số nhỏ nhất là %.0f\n",a );
        }else if( b<a && b<c ){
            printf("So nho nhat la %.0f\n",b);
        }else{
            printf("So nho nhat la %.0f\n",c);
        }
            break;
        case 5:
        if(a>b && a>c){
        printf("Số lớn nhất la %.0ff\n",a);
        }else if( b>a && b>c){
            printf("Số lớn nhất la %.0f\n",b);
        }else{
            printf("Số lớn nhất la %.0f\n",c);
        }
            break;
        case 6:
            exit(0);        
        default:
            printf("Nhap khong hop le!");
            break;
        }
        printf("\n");
    } while (choice != 6);
    return 0;
}
