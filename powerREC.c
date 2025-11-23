#include<stdio.h>
int power(int a,int b){
        if(b==0) return 1;
    int p = a*power(a,b-1);
    return p;
}
int main(){
    int m;
    printf("Enter the base  :\n ");
    scanf("%d",&m);
    int n;
    printf("Enter the power :\n ");
    scanf("%d",&n);
    int c = power(m,n);
    printf("The answer is : %d",c);
}