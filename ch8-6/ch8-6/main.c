//
//  main.c
//  ch8-6
//
//  Created by Eric Wei on 10/06/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
char get_first(void);
    
int main(void)
    {
        char bh;
        printf("Enter a sentence:");
        bh = get_first();
        putchar(bh);
        printf("\n");
        return 0;
    }
     
char get_first()
    {
        char ch;
        ch = getchar();
        while (!isalpha(ch))
        {
            ch = getchar();
        }
        return ch;
    }
   
