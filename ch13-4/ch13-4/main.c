//
//  main.c
//  ch13-4
//
//  Created by Eric Wei on 06/07/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#define size 1024
int main(int argc, const char * argv[])
{
    FILE * source;
    char word[size];
    int i = 1;
    
    while(i<argc)
    {
        if((source = fopen(argv[i], "r")) == NULL)
        {
            fprintf(stderr, "Error occurs.Cannot open the file.");
            exit(EXIT_FAILURE);
        }
        fgets(word, size, source);
        fputs(word, stdout);
        fclose(source);
        i++;
        printf("\n");
    }
    printf("Done!\n");
    return 0;
}
