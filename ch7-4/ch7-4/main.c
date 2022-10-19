//
//  main.c
//  ch7-4
//
//  Created by Eric Wei on 07/06/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int count=0;
    char ch;
    printf("enter a sentence:");
    while((ch=getchar())!='#')
    {
        if(ch=='.')
        {
            putchar('!');
            count++;
        }
        else
            if(ch=='!')
            {
                putchar('!');
                putchar('!');
                count++;
            }
            else
            {
                putchar(ch);
            }
    }
    printf("\n");
    printf("%d convert processed.\n",count);
    return 0;
}
