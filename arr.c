/**
 * 统计所有字符出现次数，用数组存放
 * 
 */

#include<stdio.h>
int main(){
    int c, i, nwhite, nother,index,prev,max,wmax;
    int ndigit[26];
    
    nwhite = nother  = prev = max = wmax =0;
    for(i = 0; i < 26; ++i)
        ndigit[i] = 0;
    
    while((c = getchar()) != EOF)
         if(c == ' ' || c == '\n' ||c == '\t')
         {
             if(prev == 0){
                ++index;
                prev = 1;
            }
             
         }
        else {
            prev = 0;
            ndigit[c-'a']++;
            if(max<ndigit[c - 'a'])max = ndigit[c - 'a'];
        }
        
            
    for(i = 0;i<26;i++){
    printf("%c ",i+'a');
    }
    printf("\n");
    for(i = 0;i < max; ++i){
        for(index = 0;index<26;index++)
        if(ndigit[index] > 0)
        {
            ndigit[index]--;
            printf("- ");
        }else{
            printf("  ");
        }
        printf("\n",max);
        
    }
        
    
    
}
