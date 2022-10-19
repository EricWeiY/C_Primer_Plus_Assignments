//
//  main.c
//  ch6-5
//
//  Created by Eric Wei on 03/06/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int row,col1,space,col2;
    char ch1,ch2,ch3;
    printf("Please enter a capital letter: ");
    scanf("%c", &ch3);
    int ch3_ = ch3-65+1;
    
    for(row=1;row<=ch3_;row++)
    {
        for(space=1;space<=ch3_-row;space++)
            printf(" ");
        for(col1=1,ch1='A';col1<=row;col1++,ch1++)
        {
            printf("%c",ch1);
        }
        for(col2=1,ch2=ch1-2;col2<=row-1;col2++,ch2--)
        {
            printf("%c",ch2);
        }
        printf("\n");
    }
    return 0;
}
