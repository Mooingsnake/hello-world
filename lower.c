#include<stdio.h>
void lower(char arr[]);
int main(){
    char c[] = "pljjqqloveddm";
    lower(c);
    printf("%s",c);
}
void lower(char c[]){
    int i = 0;
    for(;c[i]!='\0';i++)c[i] = c[i]>'a'&&c[i]<'z'?c[i]+('A'-'a'):c[i];
    
}
