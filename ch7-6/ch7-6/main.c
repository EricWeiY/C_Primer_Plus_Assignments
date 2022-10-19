//
//  main.c
//  ch7-6
//
//  Created by Eric Wei on 07/06/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int count=0;
    char former = '\0', current;
    printf("Enter a sentence:");
    while((current=getchar())!='#')
    {
        if(former=='e'&& current=='i')
        {
            count++;
        }
        former=current;
    }
    printf("%d ei in this sentence.",count);
    return 0;
}
   
