#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int i;
    char *description,name[]="sakib",s[100];
    scanf("%s",s);
    description = (char *) malloc(100);
    strcpy(description, s);
    strcat(description, name);
    puts(description);
    free(description);
    return 0;
}
