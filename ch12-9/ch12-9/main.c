//
//  main.c
//  ch12-9
//
//  Created by Eric Wei on 02/07/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 100
int main(void)
{
    int num,i,len;
    char * * str;
    char * st;
    printf("Enter the number of words:");
    scanf("%d",&num);
    getchar();
    str = (char * *)malloc(num * sizeof(char *));
    printf("Enter the words:");
    st = (char *)malloc(size * sizeof(char));
    for(i=0;i<num;i++)
    {
        scanf("%s",st);
        len = strlen(st);
        str[i] = (char *)malloc((len + 1) * sizeof(char));
        strcpy(str[i],st);
    }
    printf("Here are your words.\n");
    for(i=0;i<num;i++)
    {
        puts(str[i]);
    }
    free(str);
    return 0;
}
