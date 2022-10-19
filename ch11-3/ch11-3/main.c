//
//  main.c
//  ch11-3
//
//  Created by Eric Wei on 25/06/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
void copy(char * str, int num);

int main(void)
{
    int num;
    char * str;
    printf("please enter the length of string:");
    scanf("%d",&num);
    copy(str,num);
    
}


void copy(char * str, int num)
{
    int j,m;
    int i=0;
    printf("please enter a string:");
    
    while(isspace(str[i]=getchar()))
        continue;
    
    for(j=1;j<num;j++)
    {
        str[j]=getchar();
        if(isspace(str[j]))
        {
            str[j]='\0';
            break;
        }
    }
    
    for(m=0;m<num;m++)
        putchar(str[m]);
    printf("\n");
}
