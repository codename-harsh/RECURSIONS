#include<stdio.h>
#include<math.h>
int rev(int n){
    int d = (int)log10(n);
    int r=n%10;
    if(n<10) return n;
    else{ 
        
        return r*(int)pow(10,d) + rev(n/10);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int c  = rev(n);
    printf("%d",c);
}
