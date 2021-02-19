 /**
  * 
  * invert（x,p,n）x中第p位开始的n个位取反
  * 
  */
 
unsigned invert(unsigned x,int p,int n);
#include<stdio.h>
int main(){
    unsigned x = 0b11111111;
    int p = 6;
    int n = 3;
    unsigned an = invert(x,p,n);
    printf("%X",an);
}
unsigned invert(unsigned x, int p, int n){
     return   (~x &~(~0<<n)<<(p-n)) | (~(~(~0<<n)<<(p-n)) &x);

}
