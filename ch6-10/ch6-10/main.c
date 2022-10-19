//
//  main.c
//  ch6-10
//
//  Created by Eric Wei on 03/06/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int i,j,num,square;
    printf("enter the upper limit:");
    scanf("%d",&i);
    printf("enter the lower limit:");
    scanf("%d",&j);
    while(i>=j)
    {
        square = 0;
        for(num=j;num<=i;num++)
            {
                square += num * num;
            }
        printf("The sums of the squares from %d to %d is %d\n",j*j,i*i,square);
        printf("enter the upper limit:");
        scanf("%d",&i);
        printf("enter the lower limit:");
        scanf("%d",&j);
    }
    printf("see ya.");
    return 0;
}
