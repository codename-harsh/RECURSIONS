// #include<stdio.h>
// int maze(int cr,int cc,int er, int ec){
//   int rightways = 0;
//   int downways = 0;  
// if(cr==er && cc==ec) return 1;
// if(cr==er){
//     rightways += maze(cc,cc+1,er,ec);
// }
// if(cc==ec){
//     downways +=maze(cr+1,cc,er,ec);
// }
// int totalways = rightways + downways;
// return totalways;
// }
// int main(){
//     int n;
//     printf("Enter the num of rows : ");
//     scanf("%d",&n);
//         int m;
//     printf("Enter the num of columns : ");
//     scanf("%d",&m);
//     int x = maze(1,1,n,m);
//     printf("The ans would be : %d",x);
// }
