/**
 *打印unsigned和signed分别限定的char,int,short,long
 * 两种方法：1,打印最大值最小值，2 计算
 *
 *
 */ 

#include<stdio.h>
#include<limits.h>

int main(){
    printf("%u --------  %d\n",UCHAR_MAX,SCHAR_MAX);
    printf("%d \n",SCHAR_MIN);
    printf("%d --------  %d\n",SHRT_MAX,SHRT_MIN);
    printf("%u --------  %d\n",INT_MIN,INT_MAX);
    printf("%ld --------  %ld\n",LONG_MIN,LONG_MAX);
    
    
    printf(" \n");
    printf("%u----------%lu\n",UINT_MAX,ULONG_MAX);
}
