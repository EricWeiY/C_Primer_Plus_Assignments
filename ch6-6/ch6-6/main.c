//
//  main.c
//  ch6-6
//
//  Created by Eric Wei on 03/06/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int upper, lower,num;

    printf("please enter the upper limit:");
    scanf("%d",&upper);
    printf("please enter the lower limit:");
    scanf("%d",&lower);
    printf("number\t square\t cubic\n");
    for(num=lower;num<=upper;num++)
    {
        printf("%d\t      %d\t       %d\n",num,num*num,num*num*num);
    }
    printf("\n");
    return 0;
}
