#include<stdio.h>

#define IN 1 /*in the word*/
#define OUT 0/*out of the word*/

int main(){
    int c,nl,nw,nc,state;
    
    nl = nw = nc = 0;
    state = OUT;
    while((c = getchar()) != EOF){
        ++nc;
        
        if(c == '\n')nl++;
        if(c == '\n' || c == '\t' || c == ' ')
        {
            printf("\n");
            state = OUT;
            continue;
        }
        else if(state == OUT){
            state = IN;
            nw++;
            printf("%c",c);
            continue;
        }
         printf("%c",c);
    }
       
     printf("%d %d %d \n",nl,nw,nc);      
   
    
}
