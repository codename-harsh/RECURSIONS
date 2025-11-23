#include<stdio.h>
void zigzag(int n){
   if(n==0) return;
   printf("%d",n);
   zigzag(n-1);
   printf("%d",n);
   zigzag(n-1);
   printf("%d",n);
}
int main(){
    int n;
    printf("Enter the num : ");
    scanf("%d",&n);
    zigzag(n);
}
// iska logic sochna boht easy hai simply call stack tower bnao and step  by step chlo aaram se output soch loge :)
