//
//  main.c
//  ch6-11
//
//  Created by Eric Wei on 03/06/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#define size 8
int main(void)
{
    int num[size],index,length;
    for(index=1;index<=size;index++)
    {
        printf("enter %d numbers:",size);
        scanf("%d",&num[index]);
    }
    for(index=8;index>=1;index--)
    {
        printf("%d\t",num[index]);
    }
    return 0;
}
