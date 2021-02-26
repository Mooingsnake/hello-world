/**
 *处理123.45e-6  可能有e或者正负号
 * 
 *
 */ 
#include<stdio.h>
#include<ctype.h>
double atof(char s[]);

int main(){
    char s[] = "123.45e-6";
    printf("%g",atof(s));
}

double atof(char s[]){
    int i = 0;
    int sign = 0;
    double sum = 0;
    double digit = 0;
    double exp;
    double index = 1;
    int e = 0;
    for(;s[i]=='0';i++)
        ;

    if(s[i]=='-')
        sign = -1;
    else 
        sign = 1;
//     printf("1\n");
    for(;s[i]!='\0' && s[i]!='.' &&s[i]!='e';i++){
        if(isdigit(s[i]))
            sum = sum*10 + s[i]-'0';
    }
//     printf("2\n");
    for(;s[i]!='\0'&& s[i]!='e';i++){
            if(isdigit(s[i])){
                index *= 0.1;
            digit = digit + (s[i]-'0')*index; 
            }
    }
    sum += digit;
    sum *= sign;
//     printf("%g\n",digit);
    if(s[i]=='e'){
        if(s[++i]=='-')sign = -1;
        else sign = 1;
        printf("%c\n",s[i]);
        for(;s[i]!='\0';i++){
            if(isdigit(s[i]))
                e = e* 10 + s[i]-'0';
        }
//         printf("%d\n",e);
        while(e>0){
            if(sign==1){
                sum *= 10;
            }else{
                sum *= 0.1;
            }
            e--;
        }
    }
    return sum;
}
