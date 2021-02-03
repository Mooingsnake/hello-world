/**
 * 
 * 字符数组，读取一组文本行，string X char[] ✓
 * 并且把最长的一行打印出来
 * 提示：char[]存储每一行
 */
#include<stdio.h>
#define MAXLINE 100
int getnewline(char line[]);
void copy(char from[],char to[]);

int main(){
    int lmax,ln;
    char line[MAXLINE];
    char linemax [MAXLINE];
    
    ln = lmax = 0;
    while((ln = getnewline(line)) != 0){
        if(lmax<ln)lmax = ln;
        copy(linemax, line);
     //   printf("%s",line);
    }
    printf("%s\n",line);
    printf("%d",lmax);
    return 0;
}
int getnewline(char line[]){
    char c;
    int index = 0;
    while((c = getchar()) != EOF &&c != '\n'){
        line[index] = c;
        index++;
    }
    return index;
}
void copy(char from[],char to[]){
    int index = 0;
    while(from[index]!='\0'){
        to[index] = from[index];
    }
}
