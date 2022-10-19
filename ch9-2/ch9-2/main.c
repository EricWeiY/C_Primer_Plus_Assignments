//
//  main.c
//  ch9-2
//
//  Created by Eric Wei on 13/06/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
void chline(char ch,int i,int j);

int main(int argc, const char * argv[])
{
    char ch;
    int row, column;
     
    printf("Please enter a character: ");
    ch = getchar();
    
    printf("Please enter the number of rows: ");
    scanf("%u", &row);
    
    printf("Please enter the number of columns: ");
    scanf("%u", &column);
    
    chline(ch, column, row);
     
    return 0;
}


void chline(char ch,int i,int j)
{
    int row,col;
    for(row=1;row<=j;row++)
    {
        for(col=1;col<=i;col++)
        {
            putchar(ch);
        }
    printf("\n");
    }
}
