//
//  main.c
//  ch8-2
//
//  Created by Eric Wei on 09/06/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    char ch = 0;
    int n_char = 0;
    printf("Enter a sentence:");
    while ((ch = getchar()) != EOF)
        {
            n_char++;
            if (ch < ' ')
            {
                if ('\t' == ch)
                {
                    putchar('\\');
                    putchar('t');
                    printf(":%d ", ch);
                }
                else
                    if ('\n' == ch)
                {
                    putchar('\\');
                    putchar('n');
                    printf(":%d ", ch);
                }
                else
                {
                    putchar('^');
                    putchar(ch+64);
                    printf(":%d ", ch);
                }
            }
            else
            {
                putchar(ch);
                printf(":%d ", ch);
            }
            
            if (n_char % 10 == 0)
            {
                printf("\n");
            }

        }
}

