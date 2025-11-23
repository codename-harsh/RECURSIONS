#include<stdio.h>
void dec(int a){
    if(a==0) return; // base case ;-)
    printf("%d\n",a);
    dec(a-1);
    return;
}
int main(){
    int n;
    printf("Enter the num of times : ");
    scanf("%d",&n);
    dec(n);
}
