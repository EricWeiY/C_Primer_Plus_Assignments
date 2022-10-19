//
//  main.c
//  ch12-4
//
//  Created by Eric Wei on 01/07/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
void count(void);
int c = 1;

int main(void)
{
    int i = 0;
    while(i<10)
    {
        count();
        i++;
    }
}


void count()
{

    printf("This is the %dth count.\n",c);
    c++;
}
