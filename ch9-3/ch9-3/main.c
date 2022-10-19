//
//  main.c
//  ch9-3
//
//  Created by Eric Wei on 13/06/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
void word(char ch,int r,int c);

int main(void)
{
    char ch;
    int row, column;
     
    printf("Please enter a character: ");
    ch = getchar();
    
    printf("Please enter the number of rows: ");
    scanf("%u", &row);
    
    printf("Please enter the number of columns: ");
    scanf("%u", &column);
    
    word(ch,row,column);
     
    return 0;
}


void word(char ch,int r,int c)
{
    int row,col;
    
    for(row=1;row<=r;row++)
    {
        for(col=1;col<=c;col++)
        {
            putchar(ch);
        }
    printf("\n");
    }
}
