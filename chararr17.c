/**
 * 
 * 字符数组，读取一组文本行，string X char[] ✓
 * 打印字符数大于20的输入行（考虑包括了空格判断）
 * 提示：char[]存储每一行
 */
#include<stdio.h>
#define MAXLINE 100
int getnewline(char line[]);
void copy(char from[],int index,char to[]);

int main(){
    int lmax,ln,index,number;
    char line[MAXLINE];
    char linemax [MAXLINE];
    char linegroup[10000];
    ln = lmax = index = number= 0;
    while((ln = getnewline(line)) != 0){
        if(10<ln){       
        copy(line, lmax, linegroup);
        lmax = ln+lmax;
        linegroup[lmax]='\n';
        lmax++;
        number++;
        }
    }
    
    printf( "%d\n %s\n",number,linegroup);
    return 0;
}
int getnewline(char line[]){
    char c;
    int index = 0;
    while((c = getchar()) != EOF &&c != '\n'){
        line[index] = c;
        if(c!=' '&&c!='\t')
            index++;
    }
   // printf("%d",index);
    return index;
}
void copy(char from[],int index,char to[]){
    int offset = 0;
    while(from[offset]!='\0'){
        to[index+offset] = from[offset];
        offset++;
    }
}
