//
//  main.c
//  ch6-4
//
//  Created by Eric Wei on 02/06/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int row,col;
    char ch;
    for(row=1,ch='A';row<=6;row++)
    {
        for(col=1;col<=row; col++,ch++)
        printf("%c",ch);
        
    printf("\n");
    }
    return 0;
}
