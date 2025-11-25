//Hanoi tower ka simple logic tha that is jo disks the unhe hame tower 3 yani destination (d) tower pe pahuchana tha with the help of source tower(s) and helping tower(h) .. There were pattern ki agar 3 ka hai to pehle 2 diska helping tower me rkho then i ko destination pe then baki dono ko destination witht he help of source tower . 

#include<stdio.h>
void tower(int n,char s,char h,char d){
if(n==0) return;
tower(n-1,s,d,h);
printf("%c -> %c\n",s,d);
tower(n-1,h,s,d);
return;
}
int main(){
    int n;
    printf("Enter the num of disks : ");
    scanf("%d",&n);
    tower(n,'A','B','C');
}