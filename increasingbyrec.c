#include<stdio.h>
void inc(int a,int b){
    if(a>b) return; // base case ;-)
    printf("%d\n",a);
    inc(a+1,b);
    return;
}
int main(){
    int n;
    printf("Enter the num of times : ");
    scanf("%d",&n);
    inc(1,n); //isme ek extra parameter lene k liye hamne 1 ke sath n bhi dia bcs boundary set krni thi ki isse aage jayega to return krde wanra infinite loop bn rha tha bc :)//
}
