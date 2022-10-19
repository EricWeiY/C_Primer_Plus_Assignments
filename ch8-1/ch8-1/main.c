//
//  main.c
//  ch8-1
//
//  Created by Eric Wei on 09/06/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    char ch = 0;
    int count = 0;
    
    printf("Enter a sentence:");
    while ((ch = getchar()) != EOF)
    {
        putchar(ch);
        count++;
    }
    
    printf("There are %d characters in the file!\n",count);
    return 0;
}
