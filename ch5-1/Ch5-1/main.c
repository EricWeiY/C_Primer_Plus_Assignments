//
//  main.c
//  Ch5-1
//
//  Created by Eric Wei on 30/05/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
#define convert 60;
int main(void)
{
    int m;
    int h;
    int c; //covertion
    printf("enter a time:");
    scanf("%d",&m);
    while(m>0)
    {
        c = m % convert;
        h = m / convert;
        printf("it equals to %d hours and %d minutes.\n",h,c);
        printf("enter a time:");
        scanf("%d",&m);
    }
    printf("re-enter a time dude!!!!!!!\n");
    
    return 0;
    
}
