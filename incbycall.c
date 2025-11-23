#include<stdio.h>
void inc(int a){
    if(a==0) return; // base case ;-)
    inc(a-1);
    printf("%d\n",a);
    return;
}
int main(){
    int n;
    printf("Enter the num of times : ");
    scanf("%d",&n);
    inc(n);
}

