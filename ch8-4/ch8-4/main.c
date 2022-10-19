//
//  main.c
//  ch8-4
//
//  Created by Eric Wei on 10/06/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
int main(void)
{
    float n_ch=0,n_word=0,count;
    char ch;
    bool inword=false;
    printf("enter a sentence:");
    while((ch=getchar())!=EOF)
    {
        if(isalpha(ch))
            n_ch++;
        
        if (isalpha(ch) && !inword)
        {
            inword=true;
            n_word++;
        }
        if(isspace(ch) && inword)
        {
            inword=false;
        }
        if(ispunct(ch))
            continue;
    }
    count=n_ch/n_word;
    printf("%f average letter.\n",count);
    return 0;

}
