//
//  main.c
//  ch13-2
//
//  Created by Eric Wei on 06/07/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#define size 1024
void copy(FILE * source, FILE * target);

int main(int argc, const char * argv[])
{
    FILE * source;
    FILE * target;
    
    if(argc != 3)
    {
        fprintf(stderr,"Error occurs,too few arguments.\n");
        exit(EXIT_FAILURE);
    }
    if((source = fopen(argv[1],"rb"))==NULL)
    {
        fprintf(stderr, "Error occurs,cannot open the file.\n");
        exit(EXIT_FAILURE);
    }
    if((target = fopen(argv[2],"wb"))==NULL)
    {
        fprintf(stderr, "Error occurs,cannot open the file.\n");
        exit(EXIT_FAILURE);
    }
    copy(source,target);
    
    fclose(source);
    fclose(target);
    printf("Done.\n");
    return 0;
}

void copy(FILE * source, FILE * target)
{
    char str[size];
    fread(str, sizeof(char), size, source);
    fwrite(str,sizeof(char),size,target);
}
