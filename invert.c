 /**
  * 
  * invert（x,p,n）x中第p位开始的n个位取反
  * rightrot(x,n)返回x最右端移出最左端移入n位的值
  */
 

#include<stdio.h>

unsigned invert(unsigned x,int p,int n);
unsigned rightrot(unsigned x, int n);
int wordlength();
int main(){
    unsigned x = 0b11111111;
    int p = 6;
    int n = 3;
   // unsigned an = invert(x,p,n);
    printf("%x\n",rightrot(x,n));
//    printf("%d\n",(wordlength()-1));
}
unsigned invert(unsigned x, int p, int n){
     return   (~x &~(~0<<n)<<(p-n)) | (~(~(~0<<n)<<(p-n)) &x);

}
unsigned rightrot(unsigned x, int n){
    while(n>0){
        //在这里一次循环把最右边放到最左边
        //最右边
        unsigned s = x & 1;
        x = x>>1;
        x =  s<<(wordlength()-1) |x;
        n--;
    }
    return x;
}
int wordlength(){
    int i = 0;
    unsigned x =(unsigned) ~0;
  //  printf("%x\n",x);
    for(i = 1;(x = x>>1)>0;i++);
    return i;
//     while(x>0){
//         i++;
//         x = x>>1;
//     }
//     return i;
    
}
