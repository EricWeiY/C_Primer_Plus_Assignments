//
//  main.c
//  ch5-3
//
//  Created by Eric Wei on 31/05/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
#define convert 7;
int main(void)
{
    int days;
    int week;
    int rest;
    
    printf("enter the number of days:");
    scanf("%d",&days);
    while(days>0)
    {
        week = days/convert;
        rest = days%convert;
        printf("%d days are %d weeks, %d days\n",days,week,rest);
        printf("enter the number of days:");
        scanf("%d",&days);
    }
    printf("re-enter the number of days:");
    return 0;
    
}
