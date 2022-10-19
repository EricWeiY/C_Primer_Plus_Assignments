//
//  main.c
//  ch13-3
//
//  Created by Eric Wei on 07/07/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define size 1024
int main(void)
{
    char name[size];
    char target[size];
    FILE * source;
    char word[size];
    char ch;
    int i=0;
    
    printf("Please enter the name of the file:\n");
    scanf("%s",name);
    
    if((source = fopen(name, "r")) == NULL)
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
    
    printf("Enter a target file name:");
    scanf("%s",target);
    
    if((source = fopen(target, "w")) == NULL)
    {
        printf("Error occurs. Cannot open the file.\n");
        exit(EXIT_FAILURE);
    }
    
    fprintf(source, "%s",word);
    fclose(source);
    printf("Done!\n");
    return 0;
}
