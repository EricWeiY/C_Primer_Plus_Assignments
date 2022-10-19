//
//  main.c
//  ch7-1
//
//  Created by Eric Wei on 07/06/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
#define space ' '
#define line '\n'
int main(void)
{
    int s=0;
    int l=0;
    int c=0;
    char ch;
    printf("please enter a senctence:\n");
    while((ch=getchar())!='#')
    {
        if(ch == space)
        {
            s++;
        }
        else
            if(ch == line)
            {
                l++;
            }
            else
            {
                c++;
            }
    }
    printf("there are %d linespace,%d spaces and %d words\n",l,s,c);
    return 0;
}
