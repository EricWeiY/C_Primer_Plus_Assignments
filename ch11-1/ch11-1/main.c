//
//  main.c
//  ch11-1
//
//  Created by Eric Wei on 24/06/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#define SIZE 100
char * input(char *str, int num);

int main(void)
{
    int num;
    char * str;
    char * st;
    printf("Please enter the length of the string:");
    scanf("%d",&num);
    while(getchar()!='\n')
        continue;
    st = input(str,num);
    fputs(st,stdout);
    printf("\n");
    return 0;
}

char * input(char * str, int num)
{
    char ch;
    printf("Please enter the string:");
    for(int i = 0; i<num;i++)
    {
        ch = getchar();
        
        if(ch == EOF)
            break;
        str[i] = ch;
    }
    
    return str;
}
