//
//  main.c
//  ch11-10
//
//  Created by Eric Wei on 27/06/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
#define size 100
void delete(char * st);

int main(void)
{
    char st[size];
    printf("Enter a string:");
    fgets(st, size, stdin);
    delete(st);
    fputs(st,stdout);
    printf("\n");
}

void delete(char * st)
{
    int i,len_st,j=0;
    len_st = strlen(st);
    for(i=0;i<len_st;i++)
    {
        if(isspace(st[i]))
        {
            continue;
        }
        st[j++] = st[i];
    }
    st[j]='\0';
}
