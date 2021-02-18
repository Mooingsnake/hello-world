/**
 * 编写setbits（x,p,n，y）该函数返回对x执行下列操作后的结果：x中第p位开始的n个（二进制）位为y中最右边n位的值其余不变
 * 
 * 
 */
#include<stdio.h>
unsigned setbits(unsigned x,int p,int n, unsigned y);
int main(){
    int n = 0b100;
    int x = 0b1011011101111;
    int y = 0b1111;
    int p = 8;
    int a = setbits(x,p,n,y);
    printf("%X",a);
}
unsigned setbits(unsigned x, int p, int n, unsigned y){
    
      return ~(~(~0<<n)<<(p-1))& x |(~(~0<<n)&y)<<(p-n); 
     // return(~(~0<<n)&y)<<(p-n);
    
}
