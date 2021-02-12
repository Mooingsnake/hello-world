 
#include<stdio.h>
void squeeze(char s1[],char s2[]);
int contains(char s1,char s2[]);
int main(){
    char c[] = "123456789\n" ;
    printf("%s\n",c);
    squeeze(c,"458123");
    printf("%s\n",c);
}
void squeeze(char s1[],char s2[]){
    int i = 0;
    int j = 0;
//     while(s1[i]!='\0')i++;char new[i];
    i = 0;
    while(s1[i]!='\n'){
        if(!contains(s1[i],s2))s1[j++]=s1[i];
        i++;
    }
    s1[j]='\0';
//     printf("%s\n",s1);
}
int contains(char s1,char s2[]){
    int i =0;
    while(s2[i]!='\0')
    {
        if(s2[i]==s1)return 1;
        i++;
    }
    return 0;
}
