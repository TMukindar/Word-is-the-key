#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{   
    char str[16][10] ={"break","case", "continue", "default", "defer", "else", "for", "func", "goto", "if", "map", "range", "return", "struct", "type", "var"};
    char st[10];
    int flag=0;
    printf("enter a string : ");
    scanf("%d",&st);

    for(int i = 0; i <= 16 ; i++) {
        if(strcmp(st,str[i]) == 0) {
            flag = 1;
            break;
        }
    }

    if(flag==1)
    {
        printf("is a key word");
    }
    else
    {
        printf("is not a keyword");
    }

    return 0;
}