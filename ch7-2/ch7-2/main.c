//
//  main.c
//  ch7-2
//
//  Created by Eric Wei on 07/06/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    char ch;
    int count=0;
    printf("please enter a senctence:\n");
    while((ch=getchar()) != '#')
    {
        if(count%8==0)
        {
            printf("\n");
        }
        printf("%c:%d ", ch, ch);
        count++;
    }
    printf("\n");
    return 0;
}
