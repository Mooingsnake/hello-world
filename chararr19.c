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
void reverse(char from[], char to[]);
int main(){
   printf("it is a sentience\n");
    char sample[] = "it is a sentience";
    char answer[1000];
    reverse(sample,answer);
    printf( "%s\n",answer);
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
void reverse (char from[], char to[]){
    int index = 0;
    int size ;
    while( from[index]!='\0')index++;
    
    index--; //contains '\0' on first place
    
    size = index;
    to[size+1]='\0';
    while(index!=-1){
        to[size-index] = from[index] ;
      //  printf("%c %d",to[size-index],size-index);
        index--;
    }
    
   //   printf("###%s###",to);
}
