/**
 *将字符串的s2中的任一字符在字符串s1中第一次出现的位置作为结果返回
 * 
 * 
 */
#include<stdio.h>
int any(char s1[],char s2[]);
int main(){
    char s1[]="01234567";
    char s2[]="362";
    int a = any(s1,s2) ;
    printf("%d\n",a);
    
    
}
int any(char s1[],char s2[]){
    int i = 0;
    while(s1[i]!='\0'){
        int j = 0;
        while(s2[j]!='\0'){
            if(s1[i]==s2[j])return i;
            j++;
        }
        i++;    
    }
    
    return -1;
}
