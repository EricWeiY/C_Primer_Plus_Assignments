//
//  main.c
//  ch13-3(argv)
//
//  Created by Eric Wei on 22/08/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define size 1024
int main(int argc, const char * argv[])
{
    FILE * source;
    char word[size];
    char ch;
    int i=0;

    if((source = fopen(argv[1], "r")) == NULL)
    {
        printf("Error occurs. Cannot open the file.\n");
        exit(EXIT_FAILURE);
    }
    
    while((ch = getc(source)) != EOF)
    {
        ch = toupper(ch);
        word[i] = ch;
        i++;
    }
    
    if((source = fopen(argv[2], "w")) == NULL)
    {
        printf("Error occurs. Cannot open the file.\n");
        exit(EXIT_FAILURE);
    }
    
    fprintf(source, "%s",word);
    fclose(source);
    printf("Done!\n");
    return 0;
}

