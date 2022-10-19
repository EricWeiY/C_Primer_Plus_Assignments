//
//  main.c
//  ch11-13
//
//  Created by Eric Wei on 27/06/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int i;
    for(i=argc-1;i>0;i--)
    {
        puts(argv[i]);
    }
    return 0;
}
