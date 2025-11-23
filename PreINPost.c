#include<stdio.h>
void preinpost(int n){
   if(n==0) return;
   printf("Pre %d\n",n);
   preinpost(n-1);
   printf("In %d\n",n);
   preinpost(n-1);
   printf("Post %d\n",n);
}
int main(){
    int n;
    printf("Enter the num : ");
    scanf("%d",&n);
    preinpost(n);
}
// iska logic sochna boht easy hai simply call stack tower bnao and step  by step chlo aaram se output soch loge :)
