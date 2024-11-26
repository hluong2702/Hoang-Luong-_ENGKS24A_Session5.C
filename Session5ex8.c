 #include<stdio.h>

 int main(){

    int a, b, bcnn;
   printf("Moi ban nhap vao mot so nguyen duong a: ");
   scanf("%d",&a);

   printf("Moi ban nhap vao mot so nguyen duong b: ");
   scanf("%d",&b);
   
   for(int i =1;i++;){
   if(i % a == 0 && i % b ==0){
    bcnn = i;
    break;
   }
   }
   printf("BCNN cua a va b la %d",bcnn);
   return 0;
 }