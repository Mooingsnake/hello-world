/**
 * 字符串t复制到字符串s中，将不可见的换行变成可见的‘\n,\t’，再写一个换回来的
 * 
 */

void escape(char s[],char t[]){
    int i = 0;
    int k = 0;
    while(s[i]!='\0'){
        switch(s[i]){
            case '\t':t[k++]='\\';t[k++]='t';    break;
            case '\n':t[k++] = '\\';t[k++]='n'; break;
            default : t[k++]= s[i];break; 
        }
        i++;
    }
}
void inescape(char s[],char t[]){
    int i = 0;
    int k = 0;
    while(s[i]!='\0'){
        if(s[i]=='\\'){
            switch(s[++i]){
                case 't':t[k++]='\t'; i++;  break;
                case 'n':t[k++] = '\n';i++;break;
                default :break; 
            }
        }else{
            t[k++]= s[i];
            i++;
        }
    }
    t[k]='\0';
}
#include<stdio.h>
int main(){
    int count = 1;
    char s[]="\nsqs w   dcq qw\tw";
    printf("%s\n",s);
    while(s[count]!='\0'){count++;}
    char t[count];
    escape(s,t);
    printf("%s\n",t);
    inescape(t,s);
    printf("%s\n",s);
}
