//
//  main.c
//  ch6-2
//
//  Created by Eric Wei on 02/06/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int row,col;
    for(row=1;row<=5;row++)
    {
        for(col=1;col<=row;col++)
            printf("$");
        printf("\n");
        
    }
    return 0;
}
