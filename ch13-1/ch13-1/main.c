//
//  main.c
//  ch13-1
//
//  Created by Eric Wei on 06/07/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#define size 100
int main(void)
{
    FILE * fp;
    unsigned long count = 0;
    char st[size];
    char ch;
    
    printf("Please enter the file name:");
    scanf("%s",st);
    
    if ((fp = fopen(st,"r")) == NULL)
        {
            printf("Can't open %s\n",st);
            exit(EXIT_FAILURE);
        }
    
    while((ch=getc(fp))!=EOF)
    {
        putc(ch,stdout);
        count++;
    }
    fclose(fp);
    printf("File %s has %lu characters \n",st,count);
}
