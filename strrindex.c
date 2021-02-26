 
/**
 * 返回字符串T在s中最右边出现的位置。如果不包含t,则返回-1
 * 
 * 
 */
#include<stdio.h>
int strrindex(char t[],char s[]);
int main(){
    char t[] = "abc";
    char s[] = "t1tabc";
    printf("%d\n",strrindex(t,s));
}
int strrindex(char t[],char s[]){
    int i,j,x,sum;
    for(i= 0 ;s[i]!='\0';i++)
        ;
    sum = i;
    for(; s >= 0 ; i--){
        for(j = i,x = 0;t[x]!='\0'&&s[j]==t[x];j++,x++)
            ;
        if(t[x]=='\0')
            return sum-i;
    }
    return -1;
}
