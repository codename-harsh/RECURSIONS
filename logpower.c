#include<stdio.h>
int powerlog(int a,int b){
        if(b==0) return 1;
    int p = powerlog(a,b/2);
    if(b%2==0) return p*p;
    else return p*p*a;
}
int main(){
    int m;
    printf("Enter the base  :\n ");
    scanf("%d",&m);
    int n;
    printf("Enter the power :\n ");
    scanf("%d",&n);
    int c = powerlog(m,n);
    printf("The answer is : %d",c);
}

