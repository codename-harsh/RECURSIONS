#include<stdio.h>
int fact(int a){
    if(a==1 || a==0) return 1; // base case ;-)
    return a*fact(a-1);
}
int main(){
    int n;
    printf("Enter the num : ");
    scanf("%d",&n);
    printf("%d",fact(n));
}
