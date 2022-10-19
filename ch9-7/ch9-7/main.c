//
//  main.c
//  ch9-7
//
//  Created by Eric Wei on 13/06/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
int word(char ch);

int main(void)
{
    char ch;
    int position;
    printf("Enter a sentence:");
    while((ch=getchar())!=EOF)
    {
        position = word(ch);
        if(position==-1)
        {
            printf("It is a wrong input,input a letter again:\n");
            continue;
        }
        else
            printf("The position of letter %c is %d\n",ch,position);
    }
    return 0;
}


int word(char ch)
{
    int position1,position2;
    if(isupper(ch))
    {
        position1=ch-'A'+1;
        return position1;
    }
    else
        if(islower(ch))
        {
            position2=ch-'a'+1;
            return position2;
        }
        else
            return -1;
}
