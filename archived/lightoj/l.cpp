#include<stdio.h>

char s[100],t[100],r[100];
void strcpy(char *target, char *source){
    *target=*source;
    while(*source){
        *target++=*source++;
        *target='\0';
    }
}
void strrev(char *reverse,char *source){
	int i = -1;
	while(*source){
        source++;
        i++;
    }

    while(i>=0){
        source--;
        *reverse = *source;
        reverse++;
        --i;
    }
    *reverse='\0';
}
int main(){
    gets(s);
    
    strcpy(t,s);
    strrev(r,s);
    puts(t);
    puts(r);
    return 0;
}
