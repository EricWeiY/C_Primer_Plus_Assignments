//
//  main.c
//  ch13-6
//
//  Created by Eric Wei on 07/07/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define size 1024

int main(void)
{
    FILE * in;
    FILE * out;
    char ch;
    char name[size];
    char tar_name[size];
    int count = 0;
    
    printf("Enter the name of the file:");
    scanf("%s",name);
    if((in = fopen(name,"r")) == NULL)
    {
        fprintf(stderr,"Error occurs. Cannot open the file");
        exit(EXIT_FAILURE);
    }
    strncpy(tar_name, name, size);
    name[size-5] = '\0';
    strcat(tar_name, ".red");
    if((out = fopen(tar_name, "w")) == NULL)
    {
        fprintf(stderr, "Can't create output file.\n");
        exit(3);
    }
    while((ch = getc(in)) != EOF)
    {
        if(count % 3 == 0)
        putc(ch, out);
        count++;
    }
    if(fclose(in) != 0 || fclose(out) != 0)
        fprintf(stderr, "Error in closing files.\n");
     
    return 0;
}
   

