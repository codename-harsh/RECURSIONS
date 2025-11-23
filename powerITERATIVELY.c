#include<stdio.h>
int power(int a,int b){
    int x = a;
    for(int i=1;i<=b-1;i++){ //hehehe bc yaha pe bas b tk chlana tha and upar x ko 1 se initialize krna tha but mmeri Gmsti to dekho b-1 kr dia .... ab bc mera 50 lpa nahi lgega to kiska 😂//
        x*=a;
    }
    return x;
}
int main(){
    int m;
    printf("Enter the base  :\n ");
    scanf("%d",&m);
    int n;
    printf("Enter the power : ");
    scanf("%d",&n);
    printf("The answer is : %d",power(m,n));
}