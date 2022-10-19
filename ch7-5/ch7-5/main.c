//
//  main.c
//  ch7-5
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
        switch(ch)
        {
            case '.':
            putchar('!');
            count++;
                break;
                        
            case '!':
            putchar('!');
            putchar('!');
            count++;
                break;
                
            default:
            putchar(ch);
        }
    }
    printf("\n");
    printf("%d convert processed.\n",count);
    return 0;
}
