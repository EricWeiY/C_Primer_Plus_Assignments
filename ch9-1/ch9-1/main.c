//
//  main.c
//  ch9-1
//
//  Created by Eric Wei on 13/06/2020.
//  Copyright © 2020 Eric Wei. All rights reserved.
//

#include <stdio.h>
double min(double x, double y);

int main(void)
{
    double x,y,Min;
    printf("Enter two double numbers:");
    while((scanf("%lf %lf",&x,&y))==2)
    {
        Min=min(x,y);
        printf("The min number is %lf\n",Min);
        printf("Enter two double numbers:");
    }
    return 0;
}


double min(double x, double y)
{
    double min;
    if(x<y)
        min=x;
    else
        min=y;
    return min;
}
