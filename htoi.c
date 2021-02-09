#include<stdio.h>
#include<ctype.h>
#define MAXLINE 10000
int todigit(char s[],int i);

int main(){
    char c;
    char carr[MAXLINE];
    int i = 0;
    while((c = getchar()) != EOF){
        c = tolower(c);
        carr[i] = c;
        i++;
//         printf("%c\n",c);
    }
    printf("sss\n");
    printf("lll    %d\n",todigit(carr,i));
    return 0;
}
int todigit(char s[],int index){
    int result = 0;
    int i = 0;
    while(i!=index){
        if(s[i]<='9'&&s[i]>='0')
        result = result *16 +s[i]-'0';
        else result = result * 16 +s[i]-'a'+10;
        i++;
    }
    return result;
}
