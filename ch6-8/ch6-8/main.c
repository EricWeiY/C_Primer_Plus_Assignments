//
//  main.c
//  ch6-8
//
//  Created by Eric Wei on 03/06/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main(void)
{
    double m,n,i,j;
    printf("please enter two decimal numbers:");
    while(scanf("%lf %lf",&m,&n)==2)
    {
        i=m*n;
        j=m-n;
        printf("%lf\n",j/i);
        printf("please enter two float numbers:");
        scanf("%lf,%lf",&m,&n);
    }
    return 0;
}
